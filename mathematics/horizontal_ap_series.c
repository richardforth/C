/* Horizontal A.P. series. */

#include<stdio.h>
#include<math.h>

void main(){

    int fn, tn, ln, cd;
    int i, nn;
    int sum=0;
    int fsum;

    printf("Enter the first number of the A.P. series: ");
    scanf("%d",&fn);

    printf("Enter the total numbers in the A.P. series: ");
    scanf("%d",&tn);

    printf("Enter the common difference of A.P. series: ");
    scanf("%d",&cd);

    printf("First number = [%d], total numbers = [%d], common difference = [%d].\n", fn, tn, cd);

    puts("\nThe series(shown horizontally): ");

    nn=fn;
    for (i=1; i<=tn; i++)
    {
        printf( " => %d", nn);
        sum += nn;
        ln = nn;
        nn += cd;
    }
    printf("\n");

    for (i=1; i<=tn; i++)
    {
        printf("  + %d", cd);
    }
    printf("\n");

    printf("\nThe sum of the series A.P.: %d", sum);

    printf("\n\nThe formulaic calculation for %d, %d, and %d is as follows:", fn,tn,cd);
    printf("\n\nThe first number (fn) is %d.", fn);
    printf("\nThe total number (tn) of numbers in the series is %d.", tn);
    printf("\nThe common difference (cd) is %d.", cd);
    printf("\nThe last number in this particular series is %d", ln);
    printf("\n\nFormula: (tn x ( fn + ln ) / 2)");
    fsum = (tn * ( fn + ln ) / 2);
    printf("\nCalculation: (%d x ( %d + %d ) / 2) = %d)", tn, fn, ln, fsum);
}
