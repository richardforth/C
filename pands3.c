/* pands3.c
*
*  Attribution: https://www.tutorialspoint.com/c_standard_library/c_function_scanf.htm
*/

#include <stdio.h>

int main () {
   char str1[20], str2[30];

   printf("Enter a name and a website: ");
   scanf("%s %s ", str1, str2);

   //printf("Enter your website name: ");
   //scanf("%s", str2);

   printf("Entered Name: %s\n", str1);
   printf("Entered Website: %s", str2);

   return(0);
}
