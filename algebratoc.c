/*  algebratoc.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-11
*  Does:     Example of converting algebra to C code.
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

// Problem
// A x B - C + B

#include <stdio.h>
#include <conio.h>

int main()
{

    int a = 128;
    int b = 38;
    int c = 2;

    long int ans = a*b-c+b;

    printf("%ld\n",ans);
    getch();

    return 0;

}
