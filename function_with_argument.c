/*  function_with_argument.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-16
*  Does:     Example of a C function that takes an argument.
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

void greet(char *);

void main()
{
    char name[11]; /* 10 Char string, plus \0 */

    printf("Main function, passing name to greet function.\n");
    printf("Please enter your firstname: ");
    fgets(name, sizeof(name), stdin); /* fgets prevents buffer overflows on input */
    greet(name);
}

void greet(char n[])
{
    printf("Hello, %s!\n", n);
}
