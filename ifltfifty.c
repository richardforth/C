/*  ifltfifty.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Requires input value less than 50 || uses if statements
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

int main()

{
    int innum;
    printf("Enter a number: ");
    scanf("%d", &innum);
    if (innum<50)
    {
        printf("\nYou input the number %d which is less than 50.", innum);
        return 0;
    }

    printf("\nPlease try again...");
    return 1;
}
