#include <stdio.h>
#include <string.h>
int main() {

        char ch;
        char data[4096];
        printf("\n-------- BEGIN STDIN (end with ctrl-d) ----------\n");
        // code to get data from stdin
        while  ( (ch = fgetc(stdin)) != EOF)
        {
                //printf("%c", ch);
                strncat(data, &ch, 1);
        }
        printf("----------------- END STDIN ---------------------\n");

        printf("Data Collected:\n");
        printf("%s", data);

        return 0;
}
