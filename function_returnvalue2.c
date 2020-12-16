/*  function_returnvalue2.c
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
    // This code works
    //char *name = "Richard";

    // This code I am having issues with
    char *ptr;
    char n[11];
    printf("Enter firstname: ");
    scanf("%s", &n);
    ptr = n;
    return ptr;
}

void greet(char * x)
{
    printf("Hello, %s!\n", x);
}
