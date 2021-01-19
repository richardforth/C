/* numberline.c */

#include <stdio.h>

int main()
{
    int i, elems, step, startpos, origin = 0;

    printf("How many elements per side: ");
    scanf("%d", &elems);

    printf("What is the encremental step: ");
    scanf("%d", &step);

    startpos = step *- elems; // -25
    for(i = startpos; i <= origin; i += step)
    {
        printf("[ %d ]", i);
    }
    startpos = origin + step;
    for(i = startpos; i <= ((origin + elems) * step); i += step)
    {
        printf("[ %d ]", i);
    }
}
