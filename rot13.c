/* converts a given string to or from rot13 */

#import <stdio.h>

cipher(char c)
{
    switch(tolower(c))
    {
    case('a'):
        return('n');
    case('b'):
        return('o');
    case('c'):
        return('p');
    case('d'):
        return('q');
    case('e'):
        return('r');
    case('f'):
        return('s');
    case('g'):
        return('t');
    case('h'):
        return('u');
    case('i'):
        return('v');
    case('j'):
        return('w');
    case('k'):
        return('x');
    case('l'):
        return('y');
    case('m'):
        return('z');
    case('n'):
        return('a');
    case('o'):
        return('b');
    case('p'):
        return('c');
    case('q'):
        return('d');
    case('r'):
        return('e');
    case('s'):
        return('f');
    case('t'):
        return('g');
    case('u'):
        return('h');
    case('v'):
        return('i');
    case('w'):
        return('j');
    case('x'):
        return('k');
    case('y'):
        return('l');
    case('z'):
        return('m');
    case (' '):
        return(' ');
    default:
        return(c);
    }
}


main()
{
    char inputstr[512] = {0};
    char rot13str[512] = {0};
    int i;

    puts("Enter a string (512 char max): ");
    gets(inputstr);
    for(i = 0; inputstr[i] != '\0'; i++)
    {
        rot13str[i] = cipher(inputstr[i]);
    }
    printf("\n---------- BEGIN RESULT ----------\n\n%s\n\n---------- END RESULT ----------", rot13str);

    return 0;

}
