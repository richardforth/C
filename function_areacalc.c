/*  function_areacalc.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-16
*  Does:     Example of function call that returns a value.
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>

float area(float);

void main()
{
    float r,result;

    printf("Enter the Radius of Circle: ");
    scanf("%f",&r);
    result = area(r);
    printf("The Area of Circle is %f",result);
}

float area(float r)

{
    float area;

    area=3.14*r*r;
    return area;
}
