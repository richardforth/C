/*  struct_array.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-17
*  Does:     Struct example, books || uses function, struct, array
*  Compiler: CodeBlocks
*  OS:       Windows 10
*  Notes:    None
*/

#include<stdio.h>

struct student {
    char name[10];
    int roll_no;
    int marks;
}s[5];

void main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the Name,Roll No. and marks of student");
        scanf("%s %d %d",&s[i].name,&s[i].roll_no,&s[i].marks);
    }

    for(i=0;i<5;i++)
    {
        printf("\n%s %d %d",s[i].name,s[i].roll_no,s[i].marks);
    }

}
