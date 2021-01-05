/* C CODE TO CHECK LEAP YEAR */


#include <stdio.h>
#include <conio.h>

void main()
{
  int year;

  printf("Enter Year ");
  scanf("%d", &year);

  if ( year%4 == 0)
    printf("%d is a leap year.", year);
  else if ( year%400 == 0 )
    printf("%d is a leap year.", year);
  else
    printf("%d is not a leap year.", year);

  getch();
}
