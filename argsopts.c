/* argsopts.c
 *
 *   Author: Richard A. Forth
 *   Does:   A simple script to test arguments and options
 *   Date:   08-02-2022
 *   Comments:
 *           None
 *
 */

#include <stdio.h>

void displayHelp() {

        printf("progname -h");
}


int main(int argc, char* argv[]) {

        int i;

        for (i = 1; i < argc; i++)
        {
                printf("argv[%u] = %s\n", i, argv[i]);
                if (argv[i][0] == '-')
                {
                        if (argv[i][1] == 'h')
                        {
                                displayHelp();
                        }
                        else
                        {
                                printf("Invalid option.");
                                return 2;
                        }
                }
                else
                {
                        displayHelp();
                }
        }
        return 0;

}
