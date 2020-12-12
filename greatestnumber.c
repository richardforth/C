/*  greatestnumber.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Decision maker on greatest number of 3 values.
*  Compiler: CodeBlocks
*  OS:       Windows 10
*  Notes:    This is a reverse of code in smallestnumber.c
*            gab is greatest of a and b
*            gbc is greatest of b and c
*            s = smallest overall value
*/

#include <stdio.h>

    void main()
    {

    int a,b,c,s;

    printf("Enter the Values for a,b and c Respectively ");
    scanf("%d %d %d",&a,&b,&c);

    int gab, gbc;
    if (a > b)
        gab = a; //  1 > 4 false
    else
        gab = b; // 4

    if (b > c)
        gbc = b;  // 4 > 2 true
    else
        gbc = c; //

    if (gab>gbc)  // 4 > 4  false
        s=gab;
    else
        s=gbc;  // if gab and gbc is equal this is executed. highest of  1 4 2 is still 4

    printf("The greatest value is %d",s);


}
