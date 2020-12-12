/*  PandS.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-11
*  Does:     Examples of printf and scanf functions in C
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

void main()

{
    int a,b,c;
    printf("Enter two values: ");
    scanf("%d %d ",&a,&b);
    c=a+b;
    printf("%d",c);

}
