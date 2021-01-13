/*  getpass.c */
/// retrieve data from a file in binary
/// use setpass.c to set the data first


/*** note that the data is not encrypted - its just stored in binary data format ***/
/**  any fool with a C compiler could read the file in binary mode to do the same **/
/***************** so treat them as you would plain text files *********************/


#include<stdio.h>


void main()
{
    FILE *fp;
    char rp[128];  // retreieved password

    fp=fopen("security.dat","rb");
    fread(&rp,sizeof(rp),1,fp);
    fclose(fp);
    printf("Password retreieved successfully, and was '%s'.", rp);

}
