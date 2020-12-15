/*  pointer_array.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-15
*  Does:     Example of using pointers to access an array of integers in C
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

void main ()
{
    int x[] = { 1,2,3,4,5,6,7,8,9 };
    int i, *ptr;

    ptr=x;

    for(i=0;i<9;i++)
    {
        printf("\nArray Element x[%d] is %d ",i,*ptr);
        ptr++;

    }
}
