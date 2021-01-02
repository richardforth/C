/*  strlen2.c
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

void subst(char *s, char from, char to) {
    while (*s == from)
    *s++ = to;
}

void main()
{
    int l;
    char buf[55];
    char mystring[55] = "Richards Marvellous Menu";
    l = strlen(mystring);
    puts(mystring);
    sprintf(buf, "%0*d", l, 0);
    subst(buf, '0', '=');
    printf("%s\n", buf);
}
