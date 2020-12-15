/*  pointer_to_pointer.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Example of using pointers to point to other pointers in C
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

void main()

{

    int a=10, *p, **ptr;

    p=&a;
    ptr =&p;

    printf("\nThe value of a is %d.", a);
    printf("\nThe value of %d is stored at address %u (address of the array a).", a, &a);
    printf("\nThe value of %d is stored at address %u (address of pointer p).", *p, p);
    printf("\nThe value of %d is stored at address %u.(address of pointer ptr to pointer p).",**ptr, ptr);
    printf("\n");

}
