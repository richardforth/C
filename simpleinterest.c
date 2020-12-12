/*  simpleinterest.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Calculate simple interest || principal * time * (rate / 100)
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int years;
    float principal, rate, interest;
    printf("Enter an amount: ");
    scanf("%f", &principal);
    printf("Enter a rate of interest, per year: ");
    scanf("%f", &rate);
    printf("Enter a time in years: ");
    scanf("%d", &years);
    interest = principal * years * rate / 100;
    printf("The interest on a principal sum of %.2f over %d years at %.2f percent is %.2f", principal, years, rate, interest);
    getch();
}
