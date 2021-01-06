/*  C CODE TO CHECK PALIDROME NUMBER  */


#include <stdio.h>
#include <conio.h>

void main()
{
   int NUM,R = 0,T;

   printf("Enter a number ");
   scanf("%d",&NUM);

   T = NUM;

   while( T != 0 )
   {
      R = R * 10;
      R = R + T%10;
      T = T/10;
   }

   if ( NUM == R )
      printf("%d is a palindrome number.", NUM);
   else
      printf("%d is not a palindrome number .", NUM);

   getch();
}
