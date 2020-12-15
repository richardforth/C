/*  function_basichelloworld.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Hello World, but in a function call.
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

void main()
{
     printf("Main function, calling hello function:\n");
     hello();
}


void hello()
{
    printf("Hello, World!");
}
