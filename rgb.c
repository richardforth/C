#include<stdio.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

void main()
{
        printf("Hello World!\n");           //plain
        printf(RED "Hello World!\n" RESET); //red
        printf(GRN "Hello World!\n" RESET); //green
        printf(BLU "Hello World!\n" RESET); //blue

}
