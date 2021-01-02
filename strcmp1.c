/*  strcmp1.c
*
*  Author:   Richard A. Forth
*  Date:     2021-01-02
*  Does:     Example of comparing two strings || uses strcmp() function from string.h
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char name1[140];
    char name2[140];
    int c;

    puts("Enter string1: ");
    gets(name1);
    puts("Enter string2: ");
    gets(name2);

    // Compare the strings and print the appropriate message
    c = strcmp(name2, name1);

    if(c == 0)
    printf("The strings are equal\n");
    else
    printf("The strings are not equal\n");

}
