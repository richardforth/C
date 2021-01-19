/* getprimefactors.c */

#include <stdlib.h>
#include <stdio.h>


void getprimes(int n)
{
    int i, j, sum, isPrime;
    int x, count;

    if (n == 1)
        exit(1);

    for(x = 1; x <= n; x++)
    {
        count = 0;
        for (i = 2; i <= n/2; i++)
        {
            if(n%i == 0)
            {
                count++;
                break;
            }
        }
    }


   if(count == 0 && n != 1 )
   {
       // quit if we already have a prime number
       printf("%d.", n);
        exit(1);
   }

    //printf("All Prime Factors of %d are: ", n);

    /* Find all Prime factors */
    for(i=2; i<=n; i++)
    {
        /* Check 'i' for factor of num */
        if(n%i==0)
        {
            /* Check 'i' for Prime */
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            /* If 'i' is Prime number and factor of num */
            if(isPrime==1)
            {
                sum = n/i;
                //printf("%d x %d\n", i,sum);
                printf("%d ", i);
                getprimes(sum);
            }
        }
    }
}



int main()
{
    int num;

    /* Input a number from user */
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);

    getprimes(num);


    return 0;
}
