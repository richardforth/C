#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// premise: take a file of tab delimited data
//  of exactly 2 columns and check for
//  match or mismatch and report findings to the screen
//
//  original tab data:
//
//  data123     data123
//  data456     data789
////
//  program output example:
//
//  col1        col2    Result
//  data123     data123 MATCH
//  data456     data789 MISMATCH
//

int main( int argc, char *argv[] )
{
   int index;
   FILE *fp;
   char *fname;
   char * line = NULL;
   char mytitle[128];
   size_t len = 0;
   char *token0;
   char *token1;
   char *search = "\t";

   // get file name argument
   if (argc == 2 )
   {
        fname = argv[1];
        if( ! access( fname, R_OK ) == 0 ) {
                // file doesn't exist
                printf("\nError: File won't open or doesnt exist: %s\n", fname);
                return 1;
        }
   }
   else
   {
        printf("\nError: Wrong number of arguments supplied!\n");
        printf("Usage: ./rfcompare_2col <filename>\n");
        return 1;
   }
   // get data from file line by line,
   // split it into two variables,
   // and compare them as MATCH or MISMATCH
   fp = fopen(fname, "r");
   while ((getline(&line, &len, fp)) != -1) {
        //printf("%s", line); // DEBUG USE ONLY
        // split the line into two variables
        token0 = strtok(line, search);
        token1 = strtok(NULL, search);
        token1[strcspn(token1, "\n")] = 0; // strip the newline on the second variable
        // compare and print results
        if (strcmp(token1, token0) == 0) {
                printf("%-20s\t%-20s\tMATCH\n", token0, token1);
        }
        else
        {
                printf("%-20s\t%-20s\tMISMATCH\n", token0, token1);
        }
   }

   fclose(fp);
   if (line)
       free(line);

   return 0;
}
