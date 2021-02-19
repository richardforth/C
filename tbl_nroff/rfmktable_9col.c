#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// attribution: https://cmd.inp.nsk.su/old/cmd2/manuals/unix/UNIX_Unleashed/ch08.htm

// Usage: sar -q > sarq && sar -W > sarW && pr -m -s" " sarq sarW > merge1 && sed -i 's/-/\\-/g' merge1 && sed -i 's/\s\+/\t/g' merge1 && grep ^[0-9] merge1 > merge2 && grep -v Page merge2 > merge3 && awk -F"\t" '{ print $1, "\t", $2, "\t", $3, "\t", $4, "\t", $5, "\t", $6, "\t", $7, "\t", $9 "\t" $10}' merge3 > merge4 && rfmktable_9col merge4 | tbl | nroff | grep -v "^$"

int main ( int argc, char *argv[] )
{
   int index;
   FILE *fp;
   char ch;
   char *fname;

   // get file name argument
   if (argc == 2 )
   {
        fname = argv[1];
        if( ! access( fname, R_OK ) == 0 ) {
                // file doesn't exist
                printf("\nError: Too many arguments supplied!\n");
                return 1;
        }
   }
   else
   {
        printf("\nError: Too many arguments supplied!\n");
        return 1;
   }

   fp = fopen(fname, "r");

   printf("\\\" This file produced by a program!\n");
   printf(".ll 15i \n");
   printf(".pl 200 \n"); 
   printf(".TS \n");
   printf("allbox;\n");
   printf("l l l l l l l l l .\n");
   // do something to print tab or space delimited data
   while  ( (ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }
   /* always close files you've opened */
   fclose(fp);
   // end raw data printing
   printf(".TE");

   return 0;
}
