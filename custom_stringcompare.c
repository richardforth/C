/* C CODE TO COMPARE TWO STRINGS */

#include<stdio.h>

void strcmpr(char[],char[]);

void main()

{

    char S1[20],S2[20];
    int COMP;

    printf("ENTER STRING 1 ");
    scanf("%s",S1);

    printf("ENTER STRING 2 ");
    scanf("%s",S2);

    strcmpr(S1,S2);

}

void strcmpr(char S1[],char S2[])

{
    int i=0,flag=0;
   
     while(S1[i]!='\0' && S2[i]!='\0')   
  {
         if(S1[i]!=S2[i]){
             flag=1;
             break;
  }
         i++;
    }

    if (flag==0 && S1[i]=='\0' && S2[i]=='\0')
       
  printf("BOTH STRINGS ARE EQUAL");

    else
    printf("BOTH STRINGS ARE NOT EQUAL ");

}
