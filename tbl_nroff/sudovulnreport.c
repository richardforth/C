#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int buildData() {
        char *fname = "sudo_input.dat";
        FILE *fp;
        char servername[129];
        char *hardwaretype;
        char *os_release;
        char patchedyn[4];
        char *patched;
        fp = fopen(fname, "w");
        fprintf(fp, "Sudo Vunerability Patch Report\n");
        fprintf(fp, "ServerName\tHardware Type\tOperating System\tSudo Patched\n");
        /* always close files you've opened */
        fclose(fp);
        while (1) {
                printf("\nEnter server name (enter \"done\" when done): ");
                scanf("%s", servername);
                if (strcmp("done", servername) == 0) {
                        printf("\n\nUser input finished.\n");
                        buildReport();
                        break;
                }
                printf("Enter Hardware Type: ");
                scanf("%s", &hardwaretype);
                printf("Enter operating system: ");
                scanf("%s", &os_release);
                printf("Run the following:");
                printf("\n\n\trpm -qi sudo --changelog | grep -B2 -A2 CVE-2021-3156\n\n");
                printf("Is the server patched? yes/no: ");
                scanf("%s", patchedyn);
                patchedyn[strcspn(patchedyn, "\n")] = 0; // strip the newline character
                printf("Updating data file...\n");
                if (strcmp("yes", patchedyn) == 0) {
                        patched = "PATCHED";
                } else {
                        patched = "NOT PATCHED";
                }
                //printf("\n\n%s\n", patched);
                //printf("\n\n%s\n", patchedyn);
                fp = fopen(fname, "a");
                fprintf(fp, "%s\t%s\t%s\t%s\n", &servername, &hardwaretype, &os_release, patched);
                /* always close files you've opened */
                fclose(fp);
        }

        return 0;
}

int buildReport() {

        printf("Building report...\n");
        // make magic happen here...
        if( ! access("sudo_input.dat", R_OK ) == 0 ) {
                // file doesn't exist
                printf("\nError: File does't exist or we can't read it!\n");
                return 1;
        }
        system("rfmktable_mc sudo_input.dat 4 | nroff -t -Tascii | grep -v \"^$\"");
        return 0;
}

int main ( )
{

        buildData();
        printf("Done.\n");
        return 0;
}

/* int main ( int argc, char *argv[] )
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
   printf("Enter a title for this grid: ");
   fgets(mytitle, sizeof(mytitle), stdin);
   fp = fopen(fname, "r");

   printf("\\\" This file produced by a program!\n");
   printf(".ll 15i \n");
   printf(".pl 200 \n");
   printf(".TS\n");
   printf("allbox;\n");
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
   printf("%s", mytitle);
   // do something to print tab or space delimited data
   while  ( (ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }
   // always close files you've opened
   fclose(fp);
   // end raw data printing
   printf(".TE");

   return 0;
}

*/

