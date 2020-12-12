/*  table_for_loop.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     print times table, using for loop and user input
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

void main()
{
    int t, i, x;

    printf("Enter a number: ");
    scanf("%d", &i);

    for(x = 1; x <= 10; x++)
    {
        t = i * x;
        printf("%d x %d = %d\n", x, i, t);
    }
}
