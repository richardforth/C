/* csv2table 
*
*  Author:   Richard A. Forth
*  Date:     2021-07-02
*  Does:     converts csv data to ascii tables
*  Requires: 
*              - tbl
*              - nroff
*  Temp Tiles:
*              - temp.dat // the tble format file used by the 'tbl'  command before passing to 'nroff -Tascii'
*              - tempdata.dat // a copy of stdin used for processing as stdin is not seekable
*              - these files are destroyed after the table is generated.
*  Compiler: gcc
*  OS:       Ubuntu 18.04 under Windows Subsystem for Linux (WSL)
*
*/

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
$ ./csv2table mydata.csv
Columns: 5
+--------------------------------------+
|   Example CSV Data for conversion    |
+------+-------+-------+-------+-------+
|Col1  | Col2  | Col3  | Col4  | Col5  |
+------+-------+-------+-------+-------+
|Data1 | Data2 | Data3 | Data4 | Data5 |
+------+-------+-------+-------+-------+
$

DEMO 2

$ cat mydata.csv | csv2table
Columns: 5
+--------------------------------------+
|   Example CSV Data for conversion    |
+------+-------+-------+-------+-------+
|Col1  | Col2  | Col3  | Col4  | Col5  |
+------+-------+-------+-------+-------+
|Data1 | Data2 | Data3 | Data4 | Data5 |
+------+-------+-------+-------+-------+

DEMO 3

$ echo -e "Example CSV Data for conversion\n1,2,3,4,5\n6,7,8,9,10" | csv2table
Columns: 5
+--------------------------------+
|Example CSV Data for conversion |
+-----+------+-----+------+------+
|1    | 2    |3    | 4    |5     |
+-----+------+-----+------+------+
|6    | 7    |8    | 9    |10    |
+-----+------+-----+------+------+



*/


FILE *tfp;
int getCols(FILE *fp);

int getCols(FILE *fp)
{

  int n = 0, count = 0;
  char ch, *tfname;
  tfname = "tempdata.dat";
  tfp = fopen(tfname, "w");
  /* count columns in each row and maintain highscore */
  while  ( (ch = fgetc(fp)) != EOF)
  {
    if (ch == ',')
    {
      count++;
    }
    else if (ch == '\n')
    {
      // check if this is the most commas we found so far
      if (count > n)
      {
        // make ncols the new larger count
        n = count;
      }
      // reset count to 0;
      count = 0;
    }
    fprintf(tfp, "%c", ch);
  }
  fclose(tfp);
  rewind(fp);
  return n + 1;
}


int main ( int argc, char *argv[] )
{
   int index;
   FILE *fp, *tmpfp;
   char ch;
   char *fname;
   int ncols, i;

   // first get file name argument
   if (argc == 2 )
   {
     fname = argv[1];
     if( ! access( fname, R_OK ) == 0 ) {
       // file doesn't exist
       printf("\nError: File won't open or doesnt exist: %s\n", fname);
       return 1;
     }
     fp = fopen(fname, "r");
     ncols = getCols(fp);
     printf("Columns: %d\n", ncols);
     fclose(fp);
   }
   else
   {
     fp = stdin;
     ncols = getCols(fp);
     printf("Columns: %d\n", ncols);
     fclose(fp);
   }
   // update fp pointer to new tempdata.dat file
   fname = "tempdata.dat";
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
   remove("tempdata.dat");
   return 0;
}
