/* multiply2nums.c */


#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, sum;

    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);

    sum = a * b;
    printf("Result: %d\n\n", sum);

    printf("Rules for mutiplying signed numbers:\n\n");
    printf(" * + -\n");
    printf(" + + -\n");
    printf(" - - +\n\n");
    printf(" *      same sign leads to a positive result\n");
    printf(" * different sign leads to a negative result\n");

}
