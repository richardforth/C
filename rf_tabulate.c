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
   printf("Language     Authors Runs on\n");
   printf("\n");
   printf("Fortran      Many    Almost anything\n");
   printf("PL/1 IBM     360/370\n");
   printf("C    BTL     11/45,H6000,370\n");
   printf("BLISS        Carnegie\\-Mellon       PDP\\-10,11\n");
   printf("IDS  Honeywell       H6000\n");
   printf("Pascal       Stanford        370\n");
   // end raw data printing
   printf(".TE");
}
