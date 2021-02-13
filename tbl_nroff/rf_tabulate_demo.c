#include <stdio.h>
#include <stdlib.h>

// attribution: https://cmd.inp.nsk.su/old/cmd2/manuals/unix/UNIX_Unleashed/ch08.htm

// Usage: ./rf_tabulate | tbl | nroff | grep -v "^$"

main ( )
{
   int index;
   char *data[1024];

   printf("\\\" This file produced by a program!\n");
   printf(".TS \n");
   printf("allbox;\n");
   printf("c s s\n");
   printf("cB cB cB\n");
   printf("l l l.\n");
   // do something to print tab or space delimited data
   // eventually we will pull in a file so this program
   // is more useful to us. Demo Data for now:
   printf("Computer Programming Languages\n");
   printf("Language\tAuthors\tRuns on\n");
   printf("\n");
   printf("Fortran\tMany\tAlmost anything\n");
   printf("PL/1\tIBM\t360/370\n");
   printf("C\tBTL\t11/45,H6000,370\n");
   printf("BLISS\tCarnegie\\-Mellon\tPDP\\-10,11\n");
   printf("IDS\tHoneywell\tH6000\n");
   printf("Pascal\tStanford\t370\n");
   // end raw data printing
   printf(".TE");
}
