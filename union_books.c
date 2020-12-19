/*  union_books.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-17
*  Does:     Union example, books || uses function, union, strcpy
*  Compiler: CodeBlocks
*  OS:       Windows 10
*  Notes:    Modified example taken from https://www.tutorialspoint.com/cprogramming/c_structures.htm
*/

#include <stdio.h>
#include <string.h>

union Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

/* function declaration */
void printBook( union Books book );

int main( ) {

   union Books Book1;        /* Declare Book1 of type Book */
   union Books Book2;        /* Declare Book2 of type Book */

   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   printf("%s\n", Book1.title);
   strcpy( Book1.author, "Nuha Ali");
   printf("%s\n", Book1.author);
   strcpy( Book1.subject, "C Programming Tutorial");
   printf("%s\n", Book1.subject);
   Book1.book_id = 6495407;
   printf("%d\n", Book1.book_id);

   /* book 2 specification */
   strcpy( Book2.title, "Telecom Billing");
   printf("%s\n", Book2.title);
   strcpy( Book2.author, "Zara Ali");
   printf("%s\n", Book2.author);
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   printf("%s\n", Book2.subject);
   Book2.book_id = 6495700;
   printf("%d\n", Book2.book_id);

   printf("\nNow see what happens when we try to print the");
   printf("\nwhole union for Book1 and Book2 with the 'printBook' function....\n\n");

   /* print Book1 info */
   printBook( Book1 );

   /* Print Book2 info */
   printBook( Book2 );

   printf("\nThe reason for this behaviour lies in understanding the main difference");
   printf("\nbetween a struct and a union, as a union re-uses the same memory location");
   printf("\nfor all variables, whereas a struct holds each variable in its own memory location.");
   printf("\nNotably, a union reserves the memory of the largest member, in this example:");
   printf("\n\nunion Books {");
   printf("\n  char  title[50];");
   printf("\n  char  author[50];");
   printf("\n  char  subject[100]; <---- 100 bytes");
   printf("\n  int   book_id;");
   printf("\n};\n\n");

   return 0;
}

void printBook( union Books book ) {

   printf( "---\n");
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}
