/* numberline.c */

#include <stdio.h>

int main()
{
    int i, elems, step, startpos, origin = 0;
    char negvals;

    printf("How many elements per side: ");
    scanf("%d", &elems);

    printf("What is the encremental step: ");
    scanf("%d", &step);

    printf("Do you need negative values? y/n: ");
    scanf("%s", &negvals);

    for (i = 0; i <10; i++)
    {
	    printf("\n");
    }
    if (negvals == 'y')
    {
    	startpos = step *- elems; // -25
	printf("--");
    	for(i = startpos; i <= origin; i += step)
    	{
    	    printf("[ %d ]--", i);
    	}
    }
    if (negvals == 'n') 
    {
	    // normally calculated by negative values
	    printf("--[ 0 ]--");
    }
    startpos = origin + step;
    for(i = startpos; i <= ((origin + elems) * step); i += step)
    {
        printf("[ %d ]--", i);
    }
    for (i = 0; i <10; i++)
    {
	    printf("\n");
    }
}
