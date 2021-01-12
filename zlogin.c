/* zlogin.c : Probably the worst login program in the world */
// Attribution: https://stackoverflow.com/questions/1786532/c-command-line-password-input/1786628
//              https://www.geeksforgeeks.org/getch-function-in-c-with-examples/#:~:text=getch()%20is%20a%20nonstandard,single%20character%20from%20the%20keyboard.

#include <conio.h>
#include <dos.h> // delay()
#include <stdio.h>
#include <string.h>

void secretFunction()
{
    printf("\n\n -- Welcome back, Commander --\n\n");
}

void main()
{

    // Taking the password of 8 characters
    char pwd[9];
    int i;

    printf("Enter 8 char Password: ");
    for (i = 0; i < 8; i++) {

        // Get the hidden input
        // using getch() method
        pwd[i] = _getch();

        // Print * to show that
        // a character is entered
        printf("*");
    }
    pwd[i] = '\0';
    printf("\n");

    // Now the hidden input is stored in pwd[]
    // So any operation can be done on it

    // Here we are just printing
    printf("Entered password: ");
    for (i = 0; pwd[i] != '\0'; i++)
        printf("%c", pwd[i]);

    // Compare passwords
    if (strcmp("hello123", pwd) == 0)
    {
        puts("\nACCESS GRANTED");
        secretFunction();
    }
    else
    {
        puts("\nACCESS DENIED");
    }

    // Now the console will wait
    // for a key to be pressed
    _getch();
}
