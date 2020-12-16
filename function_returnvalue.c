/*  function_returnvalue.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-16
*  Does:     Example of function call that returns a value.
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
void greet(char *);
char * getname();

void main()
{
    char *name = getname();
    greet(name);
}

char * getname()
{
    char *name = "Richard";
    return name;
}

void greet(char * x)
{
    printf("Hello, %s!\n", x);
}
