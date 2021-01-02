/*  strupr1.c
*
*  Author:   Richard A. Forth
*  Date:     2021-01-02
*  Does:     Example of converting string to upper case || uses strupr() function from string.h
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char name1[140] = "world of computers";
    char name2[140];
    int c;

    strcpy(name2, name1);
    strupr(name2);

    printf("The original string name1=[%s]\n", name1);
    printf("The upper case version name2=[%s]\n", name2);

}
