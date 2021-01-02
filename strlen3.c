/*  strlen3.c
*
*  Author:   Richard A. Forth
*  Date:     2021-01-2
*  Does:     Example use of strlen() function in C || Prints a title with underline
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include <string.h>


void repeat (char input , int count )
{
    for (int i=0; i != count; i++ )
    {
        printf("%c", input);
    }
}


void main()
{
    int l;
    char buf[55];
    char mystring[55] = "Richards Marvellous Menu";
    l = strlen(mystring);
    puts(mystring);
    repeat ('#', l);
}
