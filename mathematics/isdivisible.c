/* isdivisible.c */

// prompts for 2 numbers
// displays True or False

#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, sum;

    printf("Enter first number (principal): ");
    scanf("%f", &a);

    printf("Enter second number (divisor): ");
    scanf("%f", &b);

    sum = a / b;

    // if the floor of its value is the same as the principal, we have a whole number:
    if (floor(sum) == sum)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
