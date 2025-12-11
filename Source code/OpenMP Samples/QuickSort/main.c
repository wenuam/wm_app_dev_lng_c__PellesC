#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include <omp.h>

#pragma comment(lib, "pomp.lib")

#define SWAP(type,a,b)  { type t; t = (a); (a) = (b); (b) = t; }

typedef ptrdiff_t index_t;  /* signed size_t (in this implementation) */

/*
 * Example demonstrating three different versions of quicksort:
 * 1) sequential method
 * 2) using OpenMP sections
 * 3) using OpenMP task
 *
 * Set the requested method in SORT_METHOD, recompile, run, and watch the timing.
 */


#define SORT_METHOD  3  /* 1 = "sequential", 2 = "OpenMP sections", 3 = "OpenMP task" */

/********************************************************************************/
static index_t partition(index_t p, index_t r, float *array)
{
    float x = array[p];
    index_t k = p;
    index_t l = r + 1;

    for (;;)
    {
        do
            k++;
        while ((array[k] <= x) && (k < r));

        do
            l--;
        while (array[l] > x);

        while (k < l)
        {
            SWAP(float, array[k], array[l]);

            do
                k++;
            while (array[k] <= x);

            do
                l--;
            while (array[l] > x);
        }

        SWAP(float, array[p], array[l]);
        return l;
    }
}

/********************************************************************************/
static void seq_quick_sort(index_t p, index_t r, float *array)
{
    if (p < r)
    {
        index_t q = partition(p, r, array);
        seq_quick_sort(p, q - 1, array);
        seq_quick_sort(q + 1, r, array);
    }
}

#if SORT_METHOD == 1  /* sequential */

/********************************************************************************/
static void quick_sort(index_t p, index_t r, index_t limit, float *array)
{
    if (p < r)
    {
        if ((r - p) < limit)
        {
            seq_quick_sort(p, r, array);
        }
        else
        {
            index_t q = partition(p, r, array);
            quick_sort(p, q - 1, limit, array);
            quick_sort(q + 1, r, limit, array);
        }
    }
}

#elif SORT_METHOD == 2  /* OpenMP sections */

/********************************************************************************/
static void quick_sort(index_t p, index_t r, index_t limit, float *array)
{
    if (p < r)
    {
        if ((r - p) < limit)
        {
            seq_quick_sort(p, r, array);
        }
        else
        {
            index_t q = partition(p, r, array);
#pragma omp parallel sections firstprivate(array, p, q, r)
            {
#pragma omp section
                quick_sort(p, q - 1, limit, array);
#pragma omp section
                quick_sort(q + 1, r, limit, array);
            }
        }
    }
}

#elif SORT_METHOD == 3  /* OpenMP task */

/********************************************************************************/
static void task_sort(index_t p, index_t r, float *array, index_t limit)
{
    if (p < r)
    {
        if ((r - p) < limit)
        {
            seq_quick_sort(p, r, array);
        }
        else
        {
            index_t q = partition(p, r, array);
#pragma omp task firstprivate(array, limit, r, q)
            task_sort(p, q - 1, array, limit);
#pragma omp task firstprivate(array, limit, r, q)
            task_sort(q + 1, r, array, limit);
        }
    }
}

/********************************************************************************/
static void quick_sort(index_t p, index_t r, index_t limit, float *array)
{
#pragma omp parallel
    {
#pragma omp single nowait
        task_sort(p, r, array, limit);
    }

}

#else

#error set SORT_METHOD to 1, 2, or 3

#endif /* SORT_METHOD */

/********************************************************************************/
static void validate_sort(index_t n, float *array)
{
    index_t i;

    for (i = 0; i < n - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            printf("\n***** Sort validation failed *****\n\n");
            return;
        }
    }
    printf("\nSort validation passed!\n\n");
}

/********************************************************************************/
int main(int argc, char *argv[])
{
    index_t i, n, limit;
    float *array;
    double start, end;

    if (argc != 3)
    {
        printf("Syntax: %s num_elems low_limit\n", argv[0]);
        return EXIT_FAILURE;
    }

    /* Parse parameters from the command line */
    n = strtoul(argv[1], NULL, 10);
    limit = strtoul(argv[2], NULL, 10);

    /* Generate array to be sorted */
    array = malloc(n *sizeof(float));
    for (i = 0; i < n; i++)
        array[i] = (float)(1.1 * rand() * 5000 / RAND_MAX);

    /* Sort with the selected method */
#if SORT_METHOD == 1
    printf("\nSorting %zu numbers seqentially...\n\n", n);
#elif SORT_METHOD == 2
    printf("\nSorting %zu numbers using OpenMP sections...\n\n", n);
#elif SORT_METHOD == 3
    printf("\nSorting %zu numbers using OpenMP tasks...\n\n", n);
#endif /* SORT_METHOD */

    /* Run the sort, with timing */
    start = omp_get_wtime();
    quick_sort(0, n - 1, limit, array);
    end = omp_get_wtime();

    /* Display the result */
    printf("Time: %f seconds\n", (end - start));

    /* Verify that we did good... */
    validate_sort(n, array);

    /* Clean up */
    free(array);

    return EXIT_SUCCESS;
}
