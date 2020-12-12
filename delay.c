/*  delay.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-12
*  Does:     Counts down 10 seconds || requires time.h and a function || also a cheeky countdown timer.
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void main()
{
   printf("There will be a delay of 10 seconds....10");
   delay(1000);
   printf("\b\b09");
   delay(1000);
   printf("\b\b08");
   delay(1000);
   printf("\b\b07");
   delay(1000);
   printf("\b\b06");
   delay(1000);
   printf("\b\b05");
   delay(1000);
   printf("\b\b04");
   delay(1000);
   printf("\b\b03");
   delay(1000);
   printf("\b\b02");
   delay(1000);
   printf("\b\b01");
   delay(1000);
   printf("\b\bOK");
}
