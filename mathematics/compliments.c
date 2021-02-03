/* compliments.c */

#include <stdio.h>

int main()
{
    int n,c,l,x;

    printf("\n\nCompliments to 10:\n\n");
    l = 10;
    x = 0;
    printf("\n +--------+\n");
    for(n=1;n<=l/2;n++)
    {
        c = l - n;
        printf(" | %d -> %d |\n", n, c);
    }
    printf(" +--------+\n");



    printf("\n\nCompliments to 100:\n\n");
    l = 100;
    x = 0;
    printf(" +----------+----------+----------+----------+----------+\n");
    for(n=1;n<=l/2;n++)
    {
        printf(" | ");
        c = l - n;
        if (n<10)
            printf(" ");

        printf("%d -> %d", n, c);
        x++;
        if (x >= 5)
        {
            x = 0;
            printf(" |\n");
        }
    }
    printf(" +----------+----------+----------+----------+----------+\n");

    printf("\n\nCompliments to 1000:\n\n");
    l = 1000;
    x = 0;

    printf("\n +------------+------------+------------+------------+------------+\n");
    for(n=1;n<=l/2;n++)
    {
        printf(" | ");
        c = l - n;
        if (n<10)
            printf(" "); // condition compounds below.

        if (n<100)
            printf(" "); // single digits get pushed 2 spaces, double digits one space.

        printf("%d -> %d", n, c);
        x++;
        if (x >= 5)
        {
            x = 0;
            printf(" |\n");
        }
    }
    printf(" +------------+------------+------------+------------+------------+\n");

    return 0;
}
