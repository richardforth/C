/*  Operators.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-11
*  Does:     Prints a table of C operators
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*/

#include <stdio.h>
#include <conio.h>

int main()
{

    puts("Operator  Description                           Type");
    puts("--------  ------------------------------------  -----");
    puts("+         Addition or Unary Plus                ARITHMETIC");
    puts("-         Subtraction or Unary Minus            ARITHMETIC");
    puts("*         Multiplication                        ARITHMETIC");
    puts("/         Division                              ARITHMETIC");
    puts("%         Modulus                               ARITHMETIC");
    puts("==        Is equal to Operator                  RELATIONAL");
    puts(">         Greater than                          RELATIONAL");
    puts("<         Less than                             RELATIONAL");
    puts("!=        Not equal to Operator                 RELATIONAL");
    puts(">=        Greater than or equal to Operator     RELATIONAL");
    puts("<=        Less than or equal to Operator        RELATIONAL");
    puts("&&        Logical AND                           LOGICAL");
    puts("||        Logical OR                            LOGICAL");
    puts("!         Logical NOT                           LOGICAL");
    puts("=         Assignment                            ASSIGNMENT");
    puts("+=        Assignment Plus Equal To              ASSIGNMENT");
    puts("-=        Assignment Minus Equal To             ASSIGNMENT");
    puts("*=        Assignment Multiply by Equal To       ASSIGNMENT");
    puts("/=        Assignment Divide by Equal To         ASSIGNMENT");
    puts("%=        Assignment Modulus Equal To           ASSIGNMENT");
    puts("++        Increment                             INCREMENT/DECREMENT");
    puts("--        Decrement                             INCREMENT/DECREMENT");
    puts("? :       Conditional Operator                  CONDITIONAL");
    puts("&         Bitwise AND                           BITWISE");
    puts("|         Bitwise OR                            BITWISE");
    puts("^         Bitwise Exclusive OR                  BITWISE");
    puts("~         One's compliment operator             BITWISE");
    puts("<<        Left Shift Operator                   BITWISE");
    puts("*=        Right Shift Operator                  BITWISE");
    puts("Sizeof()  Sizeof() Operator                     SPECIAL");
    puts("&         Ampersand Operator                    SPECIAL");
    puts("*         Pointer Operator                      SPECIAL");
    getch();

}
