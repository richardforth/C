/* C CODE TO REVERSE 5 DIGIT NUMBER ENTERED THROUGH KEYBOARD */
//The Number should be less than 32767
#include <stdio.h>

void main()
{
   int NUM, R = 0;

   printf("Enter a number to reverse\n");
   scanf("%d", &NUM);

   while (NUM != 0)
   {
      R = R * 10;
      R = R + NUM%10;
      NUM= NUM/10;
   }

   printf("After reversing the Number is = %d\n", R);

}
