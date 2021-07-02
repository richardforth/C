/* csv2table */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFSIZE 128

// attribution: https://cmd.inp.nsk.su/old/cmd2/manuals/unix/UNIX_Unleashed/ch08.htm

// cool demo to try out:
/*

$ cat mydata.csv
Example CSV Data for conversion
Col1,Col2,Col3,Col4,Col5
Data1,Data2,Data3,Data4,Data5
$
$
$
$ ./csv2table mydata.csv 5
+--------------------------------------+
|   Example CSV Data for conversion    |
+------+-------+-------+-------+-------+
|Col1  | Col2  | Col3  | Col4  | Col5  |
+------+-------+-------+-------+-------+
|Data1 | Data2 | Data3 | Data4 | Data5 |
+------+-------+-------+-------+-------+
$

*/


int main ( int argc, char *argv[] )
{
   int index;
   FILE *fp, *tmpfp;
   char ch;
   char *fname;
   int ncols, i;

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
        printf("Usage: ./csv2table <filename> <No of Cols>\n");
        printf("Example: ./csv2table data.csv 6\n");
        return 1;
   }
   fp = fopen(fname, "r");
   tmpfp = fopen("temp.dat", "w");

   fprintf(tmpfp, "\\\" This file produced by a program!\n");
   fprintf(tmpfp, ".ll 15i \n");
   fprintf(tmpfp, ".pl 200 \n");
   fprintf(tmpfp, ".TS \n");
   fprintf(tmpfp, "allbox;\n");
   fprintf(tmpfp, "c ");
   for(i=1;i<=ncols-1;i++)
   {
        fprintf(tmpfp, "s ");
   }
   fprintf(tmpfp, "\n");
   for(i=1;i<=ncols;i++)
   {
        fprintf(tmpfp, "l ");
   }
   fprintf(tmpfp, ".\n");
   // convert csv data to tabbed data
   // write to a new temporary file
   while  ( (ch = fgetc(fp)) != EOF)
    {
        if (ch == ',')
        {
                fprintf(tmpfp, "\t");
        }
        else
        {
                fprintf(tmpfp, "%c",ch);
        }
    }
   // end raw data printing
   fprintf(tmpfp, ".TE");
   fclose(tmpfp);
   /* execute code against the temporary dat file */
   char *cmd = "cat temp.dat | tbl | nroff -Tascii | grep -v ^$";
   char buf[BUFSIZE];
   FILE *cmdfp;
   if ((cmdfp = popen(cmd, "r")) == NULL) {
        printf("Error opening pipe!\n");
        return -1;
   }

   while (fgets(buf, BUFSIZE, cmdfp) != NULL) {
         printf("%s", buf);
    }

   if(pclose(cmdfp))  {
       printf("Command not found or exited with error status\n");
   }

   /* always close files you've opened */
   fclose(fp);
   
   /* delete the temporary file */
   remove("temp.dat");
   return 0;
}
