/*  setpass.c */
/// write data to a file in binary
/// use getpass.c to retreive the data again


/*** note that the data is not encrypted - its just stored in binary data format ***/
/**  any fool with a C compiler could read the file in binary mode to do the same **/
/***************** so treat them as you would plain text files *********************/


#include<stdio.h>


void main()
{
    FILE *fp;
    char np[128];  // new password
    char cnp[128]; // confirm new password

    /// work needed to hide inputs

    printf("Enter a new password: ");
    scanf("%s", &np);

    printf("Confirm new password: ");
    scanf("%s", &cnp);

    if (strcmp(cnp, np) == 0)
    {
         fp=fopen("security.dat","wb+");
         fwrite(&np,sizeof(cnp),1,fp);
         fclose(fp);
         printf("OK, password updated successfully.");
    }
    else
    {
        printf("Sorry passwords to not match.");
    }
}

