/* file_read.c
 * *
 * *  Create a C program the write a new file or overwrites and existing file of the same name
 * *
 * */


#include <stdio.h>
#include <stdlib.h>


void main()
{
    FILE *fp;
    char ch;

    fp = fopen("tab_data.txt", "r");

    /* test for successful file open operation*/
    if (fp == 0)
    {
        printf("Error--file could not be opened.\n");
        exit(1);
    }

    /* retreive our message */
    while  ( (ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }

    /* always close files you've opened */
    fclose(fp);

