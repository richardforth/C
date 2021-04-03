/* fib.c
 *
 * print fibonacci sequence up to desired number
 * Author: Richard A. Forth
 */

 #include <string.h>

 void fibber(int t)
 {
     int n = 1;
     int pn = 1;
     int sum = 1;

     // the first two number of the sequence are always one
     printf("  '%d',\n", pn);

     while (sum <= t )
     {
        printf("  '%d',\n", sum);
        pn = n;
        n = sum;
        sum = n+pn;
     }

 }

 int main()
 {
     int tgt;


     printf("Enter target number to go up to: ");
     scanf("%d", &tgt);
     if (tgt > 1)
     {
         printf("Input received: %d", tgt);
         printf("\nOutput:\n\n");
         printf("[\n");
         fibber(tgt);
         printf("]\n\n");
         printf("Done.");
     }
     else
     {
         printf("\nERROR! Input must be greater than 1.\n");
     }


     return 0;
 }
