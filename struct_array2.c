/*  struct_array2.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-17
*  Does:     Struct example, books || uses function, struct, array, modified
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
    for(i=0;i<10;i++)
    {
        printf("Enter the Name of student %d: ", i);
        scanf("%s",&s[i].name);
        printf("Enter the Roll No. of student %d: ", i);
        scanf("%d",&s[i].roll_no);
        printf("Enter the marks of student %d: ", i);
        scanf("%d", &s[i].marks);
    }

    for(i=0;i<10;i++)
    {
        printf("\n---\n%s %d %d",s[i].name,s[i].roll_no,s[i].marks);
    }

}
