/* getcols.c */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*

Example:

$ ./getcols mydata.csv
Widest record has 5 columns.

*/

int main( int argc, char *argv[] ) {

  /* define variables */
  int ncols = 0, count = 0;
  char *fname, ch;
  FILE *fp;

  /* DONE: open file */
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
    printf("Usage: ./getcols <filename.csv>\n");
    printf("Example: ./getcols data.csv\n");
    return 1;
  }


  fp = fopen(fname, "r");

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
      if (count > ncols)
      {
        // make ncols the new larger count
        ncols = count;
      }
      // reset count to 0;
      count = 0;
    }
  }

  /* DONE: print report */
  printf("Widest record has %d columns.\n", ncols + 1);


  /*  */
  return 0;
}
