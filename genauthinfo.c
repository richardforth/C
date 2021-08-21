/* genauthinfo.c
 *  Author:      Richard A. Forth
 *  Date:        2021.08.21
 *  Description: Generates the author comments you see here and provides the MIT license as default, speeds up development time.
 *  License:     MIT (see below)


 Copyright 2021 Richard A. Forth

 Permission is hereby granted, free of charge, to any person
 obtaining a copy of this software and associated documentation
 files (the "Software"), to deal in the Software without
 restriction, including without limitation the rights to use,
 copy, modify, merge, publish, distribute, sublicense, and/or
 sell copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following conditions:
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 */


#include <stdio.h>
#include <string.h>
#include <time.h>


int main() {

    char auth_name[25];
    char auth_date[20];
    char auth_progname[50];
    char auth_prog_descr[200];
    char auth_license[2048];
    char output[9000];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("Enter program name [new.c]: ");
    fgets(auth_progname, sizeof auth_progname, stdin);

    if (strlen(auth_progname) == 1) {
        strcpy(auth_progname, "new.c");
    }

    printf("\nEnter a breif description of the program [A new program.]: ");
    fgets(auth_prog_descr, sizeof auth_prog_descr, stdin);

    if (strlen(auth_prog_descr) == 1) {
            strcpy(auth_prog_descr, "A new program.");
    }

    printf("\nEnter Author name [Richard A. Forth]: ");
    fgets(auth_name, sizeof auth_name, stdin);

    if (strlen(auth_name) == 1) {
            strcpy(auth_name, "Richard A. Forth");
    }

    printf("/* %s\n *\n"
           " *  Author:      %s\n"
           " *  Date:        %d.%02d.%02d\n"
           " *  Description: %s\n"
           " *  License:     MIT (see below)\n"
           "\n\n"
           " Copyright 2021 %s\n\n"
           " Permission is hereby granted, free of charge, to any person\n"
           " obtaining a copy of this software and associated documentation\n"
           " files (the \"Software\"), to deal in the Software without\n"
           " restriction, including without limitation the rights to use,\n"
           " copy, modify, merge, publish, distribute, sublicense, and/or\n"
           " sell copies of the Software, and to permit persons to whom the\n"
           " Software is furnished to do so, subject to the following conditions:\n"
           " The above copyright notice and this permission notice shall be\n"
           " included in all copies or substantial portions of the Software.\n"
           " THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND,\n"
           " EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF\n"
           " MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.\n"
           " IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY\n"
           " CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,\n"
           " TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE\n"
           " SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n\n"
           " */"
           "\n\n"
           "int main () {\n"
           "\n\n"
           "  return 0;\n"
           "}\n"
           , auth_progname, auth_name, tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, auth_prog_descr, auth_name);

    return 0;
}
