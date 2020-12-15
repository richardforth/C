/*  2darray_init.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Example of initializing and indexing a 2 dimensional array in C
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

void main()
{
    int x[4][2] = {
        {10,71},
        {52,61},
        {10,11},
        {12,16}
    }, i,j;

    printf("\nMemory map for 2D array:-\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("\nArray x[%d][%d] has value %d at memory location %u.", i, j, x[i][j], &x[i][j]);
        }
    }

    printf("\n---\n");

    printf("\nAs a table:-\n");

    printf("\n+--+--+--+\n");
    printf("|x |c0|c1|\n");
    printf("+--+--+--+\n");
    printf("|r0|%d|%d|\n",x[0][0], x[0][1]);
    printf("|r1|%d|%d|\n",x[1][0], x[1][1]);
    printf("|r2|%d|%d|\n",x[2][0], x[2][1]);
    printf("|r3|%d|%d|\n",x[3][0], x[3][1]);
    printf("+--+--+--+\n");

    printf("\n");
}
