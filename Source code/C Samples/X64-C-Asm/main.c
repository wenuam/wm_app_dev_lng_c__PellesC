/* A few examples of mixing C and X64 assembly functions */

#include <stdio.h>

/* C version of MyStruct */
#pragma pack(push, 4)
typedef struct MyStruct {
    int a;
    double b;
} MyStruct;
#pragma pack(pop)


/* functions defined in x64.asm */
extern long long x64_mult(long long a, long long b);
extern void x64_call_to_c_func(int n);
extern void x64_struct_by_reference(MyStruct *);


/* called from x64_call_to_c_func in x64.asm */
void c_func(int n)
{
    printf("\t...c_func() called with %d\n", n);
}


/* main? not a clue, never heard of it... */
int main(void)
{
    /* call x64_mult() in x64.asm */
    long long n1 = 2, n2 = 8;
    long long n = x64_mult(n1, n2);
    printf("calling x64_mult(): %lld * %lld = %lld\n", n1, n2, n);

    /* call x64_call_to_c_func() in x64.asm */
    int times = 4;
    printf("calling x64_to_c() with %d\n", times);
    x64_call_to_c_func(times);

    /* call x64_struct_by_reference() in x64.asm */
    MyStruct s = { .a = 1, .b = 2.0 };
    printf("before calling x64_struct_by_reference(); a=%d, b=%f\n", s.a, s.b);
    x64_struct_by_reference(&s);
    printf("after calling x64_struct_by_reference(); a=%d, b=%f\n", s.a, s.b);
}

