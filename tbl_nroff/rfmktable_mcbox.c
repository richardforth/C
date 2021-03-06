#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// attribution: https://cmd.inp.nsk.su/old/cmd2/manuals/unix/UNIX_Unleashed/ch08.htm

int main ( int argc, char *argv[] )
{
   int index;
   FILE *fp;
   char ch;
   char *fname;
   int ncols, i;
   char mytitle[128];

   // get file name argument
   if (argc == 3 )
   {
        fname = argv[1];
        ncols = atoi(argv[2]);
        if( ! access( fname, R_OK ) == 0 ) {
                // file doesn't exist
                printf("\nError: File won't open or doesnt exist: %s\n", fname);
                return 1;
        }
   }
   else
   {
        printf("\nError: Wrong number of arguments supplied!\n");
        printf("Usage: ./rfmktable_multicol <filename> <No of Cols> | tbl | nroff\n");
        printf("Example: ./rfmktable_multicol tab_data 6  | tbl | nroff\n");
        return 1;
   }
   fp = fopen(fname, "r");

   printf("\\\" This file produced by a program!\n");
   printf(".ll 15i \n");
   printf(".pl 200 \n");
   printf(".TS\n");
   printf("box;\n");
   printf("c ");
   for(i=1;i<=ncols-1;i++)
   {
        printf("s ");
   }
   printf("\n");
   for(i=1;i<=ncols;i++)
   {
        printf("l ");
   }
   printf(".\n");
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
