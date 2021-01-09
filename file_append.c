/* file_append.c
*
*  Create a C program the write a new file or overwrites and existing file of the same name
*
*/


#import <stdio.h>


void main()
{
    FILE *fp;

    fp = fopen("H:\\Programming\\C\\file_new.txt", "a");

    /* test for successful file open operation*/
    if (fp == 0)
    {
        printf("Error--file could not be opened.\n");
        exit(1);
    }

    /* print our message */
    fprintf(fp, "Hello, Again!!");


    /* always close files you've opened */
    fclose(fp);



}
