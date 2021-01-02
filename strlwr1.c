/*  strlwr1.c
*
*  Author:   Richard A. Forth
*  Date:     2021-01-02
*  Does:     Example of converting string to lower case || uses strlwr() function from string.h
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char name1[140] = "WORLD OF COMPUTERS";
    char name2[140];
    int c;

    strcpy(name2, name1);
    strlwr(name2);

    printf("The original string name1=[%s]\n", name1);
    printf("The lower case version name2=[%s]\n", name2);

}
