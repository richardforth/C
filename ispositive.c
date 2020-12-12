/*  ispositive.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Decision making using if and else statement to determine positiv or negative int
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/


#include <stdio.h>

int main()
{
    int num;
    printf("Enter number (positive or negative numbers): ");
    scanf("%d", &num);
    if (num>0)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;

}
