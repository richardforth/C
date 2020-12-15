/*  pointer_strings.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-15
*  Does:     Example of using pointers to store an array of strings in C
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

void main ()

{

    char *names [4] = {
        "John",
        "Farell",
        "Neo ",
        "Sam",
    };

    int i = 0;

    for ( i = 0; i < 4; i++)
    {
        printf("Value of names[%d] = %s\n", i, names[i] );

    }
}
