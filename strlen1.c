/*  strlen1.c
*
*  Author:   Richard A. Forth
*  Date:     2021-01-2
*  Does:     Example use of strlen() function in C || Prints length of a string
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include <string.h>

void main()
{
    int l;
    char mystring[25];
    puts("Enter a string: ");
    gets(mystring);
    l = strlen(mystring);
    printf("Length of string [%s] is %d", mystring,l);

}
