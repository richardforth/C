/* numberbindings.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, n;
  printf("Enter a number greater than 1: ");
  scanf("%d", n);
  
  if (n < 2)
  {
    printf("Number entered must be greater than 1");
    exit(1);
  }
  
  printf("Number-bindings to %d:", n);
  for (i = 1; i<= n/2; i++)
  {
    printf("%d + %d = %d\n", i, n - i, n);
  }
  
  
  return 0;
}
