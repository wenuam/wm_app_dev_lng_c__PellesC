#include <stdio.h>
#include <math.h>
#include <omp.h>

#define ARRAY_SIZE  10000

double arr[ARRAY_SIZE];

int main(void)
{
    /* Initialize the array */
    for (size_t i = 0; i < ARRAY_SIZE; i++)
        arr[i] = 2.0 + (double)i;

    double max_val = 0.0;

    /* Find the maximum value in the array */
#pragma omp parallel for shared(arr) reduction(max: max_val)
    for (size_t i = 0; i < ARRAY_SIZE; i++)
    {
        max_val = fmax(max_val, arr[i]);
        /* printf("thread id = %d, i = %zu, max_val = %g\n", omp_get_thread_num(), i, max_val); */
    }

    /* Display the result */
    printf("\nmax_val = %g\n", max_val);
}
