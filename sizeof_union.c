/* sizeof_union.c */

#include <stdio.h>

void main()
{

union u

{

int b [10] ;

float f ;

char c ;

} u1 ;

printf("%d\n", sizeof(u1));

printf("\nOn 16 bit compiler, int has 2 reserved bytes,\n\tint[10] therefore expands to 20 bytes (2 x 10).\n");
printf("On 32 bit compiler, int has 4 reserved bytes,\n\tint[10] therefore expands to 40 bytes (4 x 10).\n");


}
