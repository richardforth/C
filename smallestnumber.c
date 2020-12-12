/*  smallestnumber.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Decision maker on smallest number of 3 values.
*  Compiler: CodeBlocks
*  OS:       Windows 10
*  Notes:    This code fixes bugs found in smallestnumber_buggy.c
*/

#include <stdio.h>

    void main()
    {

    int a,b,c,s;

    printf("Enter the Values for a,b and c Respectively ");
    scanf("%d %d %d",&a,&b,&c);

    /*if(a<b)
    {
        if(a<c)
            s=a;
        else
            s=c;
    }
    else
    {

        if(a<c)
            s=b;
        else
            s=c;
    }
    */

    // 4 1 2 bugfix PASSED
    // also tested on:
    // 1 2 4 - PASSED
    // 2 1 4 - PASSED
    // 1 4 2 - PASSED
    // 4 2 1 - PASSED
    // 2 4 1 - PASSED
    int sab, sbc;
    if (a < b)
        sab = a; // 4 < 1 false
    else
        sab = b; // 1

    if (b < c)
        sbc = b;  // 1 < 2 true = 1
    else
        sbc = c; //

    if (sab<sbc)  // 1 < 1  false
        s=sab;
    else
        s=sbc;  // if sab and sbc is equal this is executed. lowest of  4 1 2 is still 1

    printf("The smallest value is %d",s);


}
