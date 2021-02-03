/* dry_compliments.c */
/* derived from compliments.c to try to adhere more closely to
 * Do Not Repeat Yourself (DRY) principles */


#include <stdio.h>

void looper(int l)
{
    tabend(12, 5);
    int x = 0;
    int n, c;
    for(n=1;n<=l/2;n++)
    {
        printf(" | ");
        c = l - n;
        if (n<10)
            printf(" "); // condition compounds below.

        if (n<100)
            printf(" "); // single digits get pushed 2 spaces, double digits one space.

        printf("%d", n);
        printf(" -> ");

        if (c<10)
            printf(" "); // condition compounds below.

        if (c<100)
            printf(" "); // single digits get pushed 2 spaces, double digits one space.

        printf("%d", c);

        x++;
        if (x >= 5)
        {
            x = 0;
            printf(" |\n");
        }
    }
    tabend(12, 5);
}

void tabend(int s, int r)
{
    printf(" ");
    int i, x;
    for(i=1;i<=r;i++) // repeat r times
    {
        printf("+");
        for(x=1; x<=s; x++) //repeat s times
        {
            printf("-");
        }
    }

    printf("+\n");

}

int main()
{
    int l;

    printf("\n\nCompliments to 10:\n\n");
    l = 10;
    looper(l);

    printf("\n\nCompliments to 100:\n\n");
    l = 100;
    looper(l);

    printf("\n\nCompliments to 1000:\n\n");
    l = 1000;
    looper(l);

    return 0;
}
