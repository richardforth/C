/* simplifyabs1.c */


#include <stdio.h>
#include <math.h>

void main()
{
    int x, y, sum;

    printf("Maths question; simplify the following:\n\n");

    printf("     -|2-3-3|-|-2|\n\n");

    printf("Working:\n");
    x = -(abs(2-3-3));// math.h
    printf(" -(abs(2-3-3)) = %d\n", x);
    y = (abs(-2));
    printf(" (abs(-2)) = %d\n", y);
    sum = x - y;
    printf("Result: %d - %d = %d\n\n", x,y,sum);
    printf("Final result is %d\n",sum);

}
