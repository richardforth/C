/*  dowhile.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     count to 10 using do while looop
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

void main()
{
    int x = 1;
    do {
        printf("%d\n", x);
        x++;
    } while(x<=10);
}
