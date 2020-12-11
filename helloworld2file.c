/* prints "Hello, World!" to a file called hello_world.txt */
/* demonstrates basic sequential file output */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* define a file pointer first */
    FILE * fptr;

    /* open the requested file with fopen, dont forget to double up backslashes in windows*/
    fptr = fopen("hello_world.txt", "w");


    /* test for successful file open operation*/
    if (fptr == 0)
                                {
    printf("Error--file could not be opened.\n");
    exit(1);
                                                            }
   /* print our message */
   fprintf(fptr, "Hello, World!");

   /* always close files you've opened */
   fclose(fptr);
   return 0;
}
