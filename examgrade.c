/*  examgrade.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Grades exams (Fail|C|B|A|A+) || uses multiple if statements
*  Compiler: CodeBlocks
*  OS:       Windows 10
*  Notes:   < 40 = fail
*           > 40 && < 50 = C
*           > 50 && < 60 = B
*           > 60 && < 75 = A
*           > 75 && <= 100 = A+
*           < 0  || > 100 = INVALID
*/

#include <stdio.h>
void main()

{

    /* Here the Float variable is declared because the marks could be in floating point*/
    float p ;

    printf("Enter percentage of student: ");
    scanf("%f",&p);

    if(p<40)
    {
        printf("The student failed\n");
    }
    if(p>=40&&p<50)
    {
        printf("The Student passed with C Grade\n");
    }
    if(p>=50&&p<60)
    {
        printf("The student passed with B Grade\n");
    }
    if(p>=60&&p<75)
    {
        printf("The student passed with A Grade\n");
    }
    if(p>=75&&p<=100)
    {
        printf("The student passed with A+ Grade\n");
    }
    if(p<0|| p>100)
    {
        printf("\a In Valid input !\n");
    }
}
