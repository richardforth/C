/*  ifelse.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Decision making using if and else statement
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

int main()
{
    int passmark, score;
    passmark = 40;
    printf("Enter score: ");
    scanf("%d", &score);
    if (score<passmark)
    {
        printf("A score of %d is a Fail.\n", score);
    }
    else
    {
        printf("A score of %d is a Pass.\n", score);
    }

    return 0;

}
