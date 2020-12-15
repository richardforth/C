/*  2darray.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-15
*  Does:     Example of a 2 dimensional array in C
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

void main()
{
        int x[2][3], i, j; // 2 rows, 3 columns

        //  +--+--+--+--+
        //  |x |c0|c1|c2|
        //  +--+--+--+--+
        //  |r0|11|21|23|   Organization of the array, garbage values are set by default
        //  +--+--+--+--+
        //  |r1|99|44|55|   2 rows, 3 columns, 6 values total. eg x[0][0] is 11 x[1][2] is 55
        //  +--+--+--+--+
        //
        // To access a 2d array there is a requirement for a nested for loop.

        printf("Enter values for 2D array:-\n");
        for (i=0;i<2;i++)
        {
            for (j=0;j<3;j++)
            {
                printf("Enter value for array element x[%d][%d]:", i, j);
                scanf("%d", &x[i][j]);
            }

        }

        printf("\nMemory map for 2D array:-\n");
        for (i=0;i<2;i++)
        {
            for (j=0;j<3;j++)
            {
                printf("\nArray x[%d][%d] has value %d at memory location %u.", i, j, x[i][j], &x[i][j]);
            }
        }
        printf("\n");
}
