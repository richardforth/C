/* timestable.c */

#include <stdio.h>

int main()
{
    int i, num, sum;

    for(num=0;num<=12;num++)
    {
        printf("\n===== %d times table to 12 =====\n\n", num);
        for(i=0;i<=12;i++)
        {
            sum = i*num;
            printf("%d x %d = %d\n", i, num, sum);
        }

    }

    return 0;
}
