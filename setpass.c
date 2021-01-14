/*  setpass.c */
/// write data to a file in binary
/// use getpass.c to retreive the data again


/*** note that the data is not encrypted - its just stored in binary data format ***/
/**  any fool with a C compiler could read the file in binary mode to do the same **/
/***************** so treat them as you would plain text files *********************/


#include <stdio.h>
#include <string.h>
#include <conio.h>


void main()
{
    FILE *fp;
    int i;
    char np[128];  // new password
    char cnp[128]; // confirm new password

    /// hide inputs with stars (requires conio.h)
    printf("Enter a new password: ");
    for (i = 0; i < sizeof(np); i++) {

        // Get the hidden input
        // using getch() method
        np[i] = _getch();


        // check for enter key
        if(np[i] == 13)
            break;

        // Print * to show that
        // a character is entered
        printf("*");

    }
    np[i] = '\0';
    printf("\n");

    printf("Confirm new password: ");
    for (i = 0; i < sizeof(cnp); i++) {

        // Get the hidden input
        // using getch() method
        cnp[i] = _getch();

        // check for enter key
        if(cnp[i] == 13)
            break;

        // Print * to show that
        // a character is entered
        printf("*");

    }
    cnp[i] = '\0';
    printf("\n");

    if (strcmp(cnp, np) == 0)
    {
         fp=fopen("security.dat","wb+");
         fwrite(&np,sizeof(np),1,fp);
         fclose(fp);
         printf("OK, password updated successfully.");
    }
    else
    {
        printf("Sorry passwords to not match.");
    }
}

