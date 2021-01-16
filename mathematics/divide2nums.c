/* divide2nums.c */


#include <stdio.h>
#include <math.h>

void main()
{
    float a,b,sum;

    printf("First number: ");
    scanf("%f", &a);
    printf("Second number: ");
    scanf("%f", &b);

    sum = a / b;
    printf("Result: %f\n\n", sum);

    printf("Rules for dividing signed numbers:\n\n");
    printf(" / + -\n");
    printf(" + + -\n");
    printf(" - - +\n\n");
    printf(" *      same sign leads to a positive result\n");
    printf(" * different sign leads to a negative result\n");
    printf("\nAlso, any number, divided by 0 always leaves 0");

}
