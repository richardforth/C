/*  getarearectangle.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Calculate area of rectangle || formula area=length* breadth
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    float area, length, breadth;
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the breadth: ");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("The area of a rectangle with length of %.2f and breadth of %.2f is %.2f", length, breadth, area);
    getch();
}
