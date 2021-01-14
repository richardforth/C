/*  getpass.c */
/// retrieve data from a file in binary
/// use getpass.c to retreive the data again


/*** note that the data is not encrypted - its just stored in binary data format ***/
/**  any fool with a C compiler could read the file in binary mode to do the same **/
/***************** so treat them as you would plain text files *********************/


#include <stdio.h>
#include <conio.h> // getch()


void main()
{
    FILE *fp;
    char rp[128];  // retreieved password

    fp=fopen("security.dat","rb");
    fread(&rp,sizeof(rp),1,fp);
    fclose(fp);
    printf("Password retreieved successfully, and was '%s'.", rp);

    getch();
}

