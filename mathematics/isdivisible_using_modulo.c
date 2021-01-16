/* isdivisible_using_modulo.c */

// prompts for 2 numbers
// displays True or False

#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, sum;

    printf("Enter first number (principal): ");
    scanf("%d", &a);

    printf("Enter second number (divisor): ");
    scanf("%d", &b);

    sum = a % b;

    // if the remainder ia a whole number above zero, the number is not divisible:
    // eg 8 into 27 is 3 with a remainder of 3 = False, but
    //    9 into 27 is also 4 but but a remainder of 0 = True
    // Note modulo only works with integers
    if (a % b == 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
