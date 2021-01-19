/* getprimes.c */

#include <stdio.h>

int main()
{
  int i, n, max, h=0, count;

  printf("Enter a n: ");
  scanf("%d", &max);

  for(n = 1; n <= max; n++)
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


   if(count == 0 && n != 1 )
   {
        printf(" %d ", n);
        h++;
        if (h%10 == 0)
            printf("\n");
   }


  }
  return 0;
}
