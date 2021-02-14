#include <stdio.h>
int main() {

        char ch;
        printf("\n--------------- BEGIN STDIN -------------------\n");
        // code to get data from stdin
        while  ( (ch = fgetc(stdin)) != EOF)
        {
                printf("%c", ch);
        }
        printf("----------------- END STDIN ---------------------\n");

        return 0;
}
