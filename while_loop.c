/*  while_loop.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     prints 1 through 10 in a while loop
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

void main()
{
    int x = 1;
    while(x<=10)
    {
        printf("%d\n", x);
        x++;
    }
}
