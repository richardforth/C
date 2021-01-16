/* getabsolutenum.c */


#include <stdio.h>
#include <math.h>

void main()
{
    int a, x;

    printf("Enter a positive or negative integer: ");
    scanf("%d", &a);


    x = abs(a);// math.h
    printf("Result: %d\n\n", x);

    printf("An absolute number is its distance from zero in either direction.\n");
    printf("Absolute numbers are always positive, regardless of the reference number's sign.\n");

}
