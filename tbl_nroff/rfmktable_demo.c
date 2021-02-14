#include <stdio.h>
#include <stdlib.h>


// Usage: ./rfmktable_demo | tbl | nroff | grep -v "^$"

main ( )
{
   int index;
   char *data[1024];

   // attribution: https://cmd.inp.nsk.su/old/cmd2/manuals/unix/UNIX_Unleashed/ch08.htm
   printf("\\\" This file produced by a program!\n");
   printf(".TS \n");
   printf("allbox;\n");
   printf("c s s\n");
   printf("cB cB cB\n");
   printf("l l l.\n");
   printf("Computer Programming Languages\n");
   printf("Language\tAuthors\tRuns on\n");
   printf("\n");
   printf("Fortran\tMany\tAlmost anything\n");
   printf("PL/1\tIBM\t360/370\n");
   printf("C\tBTL\t11/45,H6000,370\n");
   printf("BLISS\tCarnegie\\-Mellon\tPDP\\-10,11\n");
   printf("IDS\tHoneywell\tH6000\n");
   printf("Pascal\tStanford\t370\n");
   printf(".TE\n");
   printf("\n\n");
   // attribution: http://www.snake.net/software/troffcvt/tbl.html
   printf(".TS\n");
   printf("allbox;\n");
   printf("c s s\n");
   printf("c c c\n");
   printf("n n n.\n");
   printf("AT&T Common Stock\n");
   printf("Year\tPrice\tDividend\n");
   printf("1971\t41\\-54\t$2.60\n");
   printf("2\t41\\-54\t2.70\n");
   printf("3\t46\\-55\t2.87\n");
   printf("4\t40\\-53\t3.24\n");
   printf("5\t45\\-52\t3.40\n");
   printf("6\t51\\-59\t.95*\n");
   printf(".TE\n");
   printf("* (first quarter only)\n");
   printf(".TE");
}
