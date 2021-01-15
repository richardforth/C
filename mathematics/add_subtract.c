/* add_subtract.c
*
*  Author: Richard A. Forth
*  Does:   Add numbers, And subtract numbers, aleternatuntil 0 is entered
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
    total += num;

    while( num != 0)
    {
        printf("[ %d ] Add number (0 to end input): ", total);
        scanf("%d", &num);
        total += num;

        //---
        /*** half time check if input is 0 ***/
        if (num == 0)
            break;

        printf("[ %d ] Subtract number (0 to end input): ", total);
        scanf("%d", &num);
        total -= num;

    }

    printf("Total: %d", total);

}
