#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// attribution: https://cmd.inp.nsk.su/old/cmd2/manuals/unix/UNIX_Unleashed/ch08.htm

// Usage:
// df -h > df_tab && sed -i 's/-/\\-/g' df_tab && sed -i 's/\s\+/\t/g' -i df_tab && sed -i 's/Mounted\ton/Mounted on/' df_tab &&  ./rfmktable_df df_tab | tbl | nroff | grep -v "^$"

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
                printf("\nError: File does't exist or we can't read it!\n");
                return 1;
        }
   }
   else
   {
        printf("\nError: Wrong number of arguments supplied!\n");
        return 1;
   }

   fp = fopen(fname, "r");

   printf("\\\" This file produced by a program!\n");
   printf(".ll 11i\n");
   printf(".in 1i\n");
   printf(".TS \n");
   printf("allbox;\n");
   printf("c s s s s s \n");
   printf("cB cB cB cB cB cB \n");
   printf("l l l l l l .\n");
   printf("DISK SPACE REPORT\n");
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
