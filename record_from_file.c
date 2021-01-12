/* record_from_file.c
*
*  Author: Richard A. Forth
*  Does: Reads records into a struct record from a file
*  Date: 2021-01-12
*  Files Read ib by this code:
*       * student1.dat
*
*  Path: Same location as program
*  Notes: run "record_to_file.exe" first to populate the file, if present, otherwise you will get errors
*  Reference C files:
*       * record_to_file.c
*       * record_from_file.c (this file)
*/

#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int roll_no;
    int marks;
};


void main()
{

    struct student s;
    FILE *fp;
    char ch;

    fp=fopen("student1.dat","r");

    if(fp==NULL)
    {
        printf("Error opening the file student1.dat\n");
        exit(1);
    }

    while(fscanf(fp,"%s %d %d",&s.name,&s.roll_no,&s.marks) == 3)
    {
        printf("%s %d %d ==>> ",s.name,s.roll_no,s.marks);
        if(s.marks >= 70)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
    }
    fclose(fp);
}
