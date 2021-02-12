/* perfect_squares.c */

#include <stdio.h>
#include <math.h> //sqrt()

int main()
{
    int radicand, num, srt;

    for(num=1;num<=30;num++) {

        // do the maths
        radicand = num*num;
        srt = sqrt(radicand); // used as a check

        // print the results
        printf("%d. %d the square root of which is %d\n", num, radicand, srt);
    }
    return 0;
}
