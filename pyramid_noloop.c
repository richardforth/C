/*  This was a challenge to create a pyramid without using a loop function.
*   it uses gotoxy() available only in conio.h which isnt available in
*   codeblocks compiler, it was first compiled in Turbo C/C++ compliler for 16bit.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
gotoxy(35,10);
printf(" * ");
printf("\n");
gotoxy(33,12);
printf(" * * * ");
printf("\n");
gotoxy(31,14);
printf(" * * * * * ");
printf("\n");
gotoxy(29,16);
printf(" * * * * * * * ");
printf("\n");
gotoxy(27,18);
printf("* * * * * * * * * ");

getch();


}

/*

What happens in CodeBlocks compiler, even though it imports conio.h
We get errors for undefined functions for clrscr and gotoxy and getch


||=== Build file: "no target" in "no project" (compiler: unknown) ===|
H:\Programming\C\pyramid_no_loop.c||In function 'main':|
H:\Programming\C\pyramid_no_loop.c|10|warning: implicit declaration of function 'clrscr' [-Wimplicit-function-declaration]|
H:\Programming\C\pyramid_no_loop.c|11|warning: implicit declaration of function 'gotoxy' [-Wimplicit-function-declaration]|
H:\Programming\C\pyramid_no_loop.o:pyramid_no_loop.c|| undefined reference to `clrscr'|
H:\Programming\C\pyramid_no_loop.o:pyramid_no_loop.c|| undefined reference to `gotoxy'|
H:\Programming\C\pyramid_no_loop.o:pyramid_no_loop.c|| undefined reference to `gotoxy'|
H:\Programming\C\pyramid_no_loop.o:pyramid_no_loop.c|| undefined reference to `gotoxy'|
H:\Programming\C\pyramid_no_loop.o:pyramid_no_loop.c|| undefined reference to `gotoxy'|
H:\Programming\C\pyramid_no_loop.o:pyramid_no_loop.c|| undefined reference to `gotoxy'|
||error: ld returned 1 exit status|
||=== Build failed: 7 error(s), 2 warning(s) (0 minute(s), 19 second(s)) ===|
*/
