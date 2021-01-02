/*  strcat1.c
*
*  Author:   Richard A. Forth
*  Date:     2021-01-02
*  Does:     Example of contatenating two strings || uses strcat() function from string.h
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char name1[20] = "Hello ";
    char name2[20] = "World";

    char concat1[40];
    printf("Variable name1=[%s], variable name2=[%s].\n", name1, name2);

    strcat(name1, name2);
    printf("Concatenated string name1=[%s].\n", name1);

}
