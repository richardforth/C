/*  strrev1.c
*
*  Author:   Richard A. Forth
*  Date:     2021-01-02
*  Does:     Example of reversing a string || uses strrev() function from string.h
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char name1[12] = "Hello World";
    char name2[12];

    strcpy(name2, name1);
    strrev(name2);

    printf("Variable name1=[%s], reverse name2=[%s].\n", name1, name2);

}
