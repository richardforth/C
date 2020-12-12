/*  smallestnumber_bugged.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Decision maker on smallest number of 3 values.
*  Compiler: CodeBlocks
*  OS:       Windows 10
*  Notes:    This code is buggy! values of highest, lowest, middle, eg 4,1,2 results in 2 which is wrong.
*/

#include <stdio.h>

    void main()
    {

    int a,b,c,s;

    printf("Enter the Values for a,b and c Respectively ");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b)
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

    printf("The smallest value is %d",s);


}
