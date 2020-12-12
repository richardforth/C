
/*  grademenu.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Tells a student if they quialify for a subject based on their grade and choice || uses case statement
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

int main()
{

    int choice, grade;

    printf("Please enter your exam grade: ");
    scanf("%d", &grade);

    printf("Please choose your preferred subject:-\n");
    printf("\t1. ARTS\n");
    printf("\t2. COMMERCE\n");
    printf("\t3. SCIENCE\n");
    printf("\n Chosen subject: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        if (grade < 40 || grade > 60)
            printf("A grade of %d does not qualify you to do ARTS, sorry!\n", grade);
        else
            printf("A grade of %d does qualify you to do ARTS, congratulations!\n", grade);
        break;
    case 2:
        if (grade < 60 || grade > 70 )
            printf("A grade of %d does not qualify you to do COMMERCE, sorry!\n", grade);
        else
            printf("A grade of %d does qualify you to do COMMERCE, congratulations!\n", grade);
        break;
    case 3:
        if (grade < 70 || grade > 100 )
            printf("A grade of %d does not qualify you to do SCIENCE, sorry!\n", grade);
        else
            printf("A grade of %d does qualify you to do SCIENCE, congratulations!\n", grade);
        break;
    default:
        printf("Please enter valid input.");
    }

    return 0;

}
