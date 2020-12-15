/*  pointer_basics.c
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
    // declare an array, a variable, and a pointer
    int a=10, b, *p;

    // assign the memory address of array a to pointer p
    p=&a;

    // assign the value at the memory address held in pointer p to b
    b=*p;

    // print results
    printf("\nThe Value of a is %d ",a);
    printf("\nThe value of a is %d and the memory location of &a is at address %u",a,&a); // value and pointer a
    printf("\nThe value of *p is %d is stored at address p:  %u", *p,p); // value and pointer p
    printf("\nThe value of b is %d and the memory location of &b is at address %u",b,&b);  // value and pointer b
    printf("\n The value at the memory location of b is %d ",*(&b)); // value of pointer b
}
