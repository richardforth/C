/* isdivisible_using_floor.c */

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

    // if the floor of the sum is the same as the sum, we have a whole number:
    // eg floor(5) = 5  = True or floor (1.2) = 1 = False
    if (floor(sum) == sum)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
