/* multiply4nums.c */


#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, c, d, sum;

    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    printf("Third number: ");
    scanf("%d", &c);
    printf("Fourth number: ");
    scanf("%d", &d);
    sum = a * b * c * d;
    printf("Result: %d\n\n", sum);

    printf("Rules for mutiplying 4 signed numbers:\n\n");
    printf(" * + -\n");
    printf(" + + -\n");
    printf(" - - +\n\n");
    printf("The above table only hold true for mutiplying two signed numbers\n");
    printf(" With 3 and more signed numbers the rules change:\n\n");
    printf(" * an even number of minus (-) signs leads to a positive result\n");
    printf(" * an odd number of minus (-) signs leads to a negative result\n");
    printf("EXAMPLES:\n");
    printf("(-2)(-3) = 6       // two minuses cancel out to leave     (+2)(+3) == 2 x  3 = 6\n");
    printf("(-2)(-3)(-4) = -24 // two minuses cancel out to leave (+2)(+3)(-4) == 6 x -4 = -24\n");
    printf("(-2)(-3)(-4)(-5) = // each two minuses cancel out so they are all positives, to leave:\n");
    printf("                                                      (2)(3)(4)(5) = 120\n\n");
    printf(" Therefore if you multiply 4 negative numbers you will get a positive result.'.\n\n");

}
