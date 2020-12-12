/*  squarert.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Print square root of a number
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int square,value;
    printf("Enter a value: ");
    scanf("%d", &value);
    square = value*value;
    printf("The square root of %d is %d.\n", value, square);
    getch();
}
