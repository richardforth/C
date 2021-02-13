$ cat rf_tabulate.c
#include <stdio.h>
#include <stdlib.h>

// attribution: https://cmd.inp.nsk.su/old/cmd2/manuals/unix/UNIX_Unleashed/ch08.htm

// Usage: ./rf_tabulate | tbl | nroff | grep -v "^$"

/* Produces the following table 
┌─────────┬─────────────────┬─────────────────┐
│Language │     Authors     │     Runs on     │
├─────────┼─────────────────┼─────────────────┤
│         │                 │                 │
├─────────┼─────────────────┼─────────────────┤
│Fortran  │ Many            │ Almost anything │
├─────────┼─────────────────┼─────────────────┤
│PL/1     │ IBM             │ 360/370         │
├─────────┼─────────────────┼─────────────────┤
│C        │ BTL             │ 11/45,H6000,370 │
├─────────┼─────────────────┼─────────────────┤
│BLISS    │ Carnegie−Mellon │ PDP−10,11       │
├─────────┼─────────────────┼─────────────────┤
│IDS      │ Honeywell       │ H6000           │
├─────────┼─────────────────┼─────────────────┤
│Pascal   │ Stanford        │ 370             │
└─────────┴─────────────────┴─────────────────┘
*/

main ( )
{
   int index;
   char *data[1024];

   printf("\\\" This file produced by a program!\n");
   printf(".TS \n");
   printf("allbox;\n");
   printf("c c c\n");
   printf("l l l.\n");
   // do something to print tab or space delimited data
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
