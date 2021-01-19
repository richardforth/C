/* passingargs1.c */

#include <stdio.h>


void myFunction(int x)
{
    printf("I got %d\n", x);
}


void main()
{
    int a = 10;
    myFunction(a);

}
