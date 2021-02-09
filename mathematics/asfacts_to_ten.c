/* asfacts_to_ten.c */

#include <stdio.h>

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
    int n, a, sum,osum;

    printf("Addition and Subtraction Facts to 10\n");
    printf("=====================================\n");
    for(n=1;n<=10;n++)
    {
        printf("\n\n");
        tabend(59, 1);
        printf(" |");
        if(n<10)
            printf(" ");
        printf(" %d                                                        |\n", n);
        tabend(59, 1);

        for(a=1;a<=10;a++)
        {

            sum = n + a;
            osum = sum;
            printf(" | ");
            if (n<10 && n>= 0)
                printf(" ");
            printf("%d +", n);
            if (a<10 && a>= 0)
                printf(" ");
            printf(" %d = ", a);
            if (sum<10 && sum>= 0)
                printf(" ");
            printf("%d", sum);

            //--
            printf(" | ");
            sum = n - a;
            if (n<10 && n>= 0)
                printf(" ");
            printf("%d - ", n);
            if (a<10 && a >= 0)
                printf(" ");
            printf("%d = ", a);
            if (sum<10 && sum>= 0)
                printf(" ");
            printf("%d", sum);

            //--
            printf(" | ");
            sum = a - n;
            if (a<10 && a>= 0)
                printf(" ");
            printf("%d - ", a);
            if (n<10 && n >= 0)
                printf(" ");
            printf("%d = ", n);
            if (sum<10 && sum>= 0)
                printf(" ");
            printf("%d", sum);


            //--
            printf(" | ");
            sum = osum - n;
            if (osum<10 && a>= 0)
                printf(" ");
            printf("%d - ", osum);
            if (n<10 && n >= 0)
                printf(" ");
            printf("%d = ", n);
            if (sum<10 && sum>= 0)
                printf(" ");
            printf("%d", sum);
            printf(" |\n");
            tabend(14, 4);
        }
    }


    return 0;
}
