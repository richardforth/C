/*  ifelseifelse.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Decision making using if, else if, and else statement
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/


#include <stdio.h>

void main()
{
    int a,b ;
    printf("Enter value for a & b respectively ");
    scanf("%d %d",&a,&b);

    if(a==b)
    {
        printf("Both A & B are Equal");
    }
    else if(a<b)
    {
        printf("B is Greater");

    }
    else
    {
        printf("A is Greater");

    }
}
