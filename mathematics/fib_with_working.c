/* fib_with_working.c
 *
 * print fibonacci sequence up to desired number
 * Author: Richard A. Forth
 */

 #include <string.h>

 void fibber(int t)
 {
     int n = 1;
     int pn = 0;
     int sum = 1;

     // the first two number of the sequence are always one
     printf("Sequence Start:  '%d',\n", sum);

     while (sum <= t )
     {
        printf(" %d + %d = %d,\n", n, pn, sum);
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
         fibber(tgt);
         printf("\nDone.");
     }
     else
     {
         printf("\nERROR! Input must be greater than 1.\n");
     }


     return 0;
 }
