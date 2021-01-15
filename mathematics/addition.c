/* addition.c
*
*  Author: Richard A. Forth
*  Does:   Add numbers, until 0 is entered
*  Date:   15-01-2021
*  Comments:
*     I am retaking mathematics and using c code for testing certain operations
*
*/


#include <string.h>
#include <math.h> // not strictly needed for simple addition but useful for future math problems

void main()
{
    int num;
    int total = 0;


    printf("[ %d ] Add number (0 to end input): ", total);
    scanf("%d", &num);


    while( num != 0)
    {
        total += num;
        printf("[ %d ] Add number (0 to end input): ", total);
        scanf("%d", &num);
    }

    printf("Total: %d", total);

}
