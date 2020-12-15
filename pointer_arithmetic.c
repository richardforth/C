/*  pointer_arithmetic.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Example of using pointers with a simple example in C
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

void main()
{
    int a, b, c, d, *p, *t;

    a=12;
    b=42;
    p=&a;
    t=&b;

    c = *p + *t;
    d = *p - *t;

    printf("Address of a =%u\n", p);
    printf("Address of b =%u\n", t);
    printf("The value of a=%d and b=%d\n.", a,b);
    printf("The addition of a & b c=%d\n", c);
    printf("The subtraction of a & b c=%d\n", d);
}
