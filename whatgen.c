/* prints to the screen what generation you are based on your birth argv[1] */

#include <stdio.h>

show_all_gens()
{
    puts("\n1928-1945: \"Silent\".");
    puts("1946-1964: \"Boomers\".");
    puts("1965-1980: \"Generation X\".");
    puts("1981-1996: \"Millennials\".");
    puts("1997-2012: \"Generation Z\".");
    puts("2012-2025: \"Generation Alpha\".");
    return 0;
}


main(int argc, char *argv[] )
{
    int year;
    int loop;

    /* argv[0] is the programs own name*/
    /* This code is redundant and used for debugging */
    /*
    printf("No. arguments given: %d", argc-1);
    printf("\nArguments received: ");
    for(loop = 1; loop <= argc-1; loop++)
        printf("%s ", argv[loop]);

    */

    /* first lets check if arg[1] is "--show-all" */
    if ( strcmp (argv[1], "--show-all") == 0)
    {
        show_all_gens();
        return 0;
    }




    printf("\nProcessing each argument...\n");
    for(loop = 1; loop <= argc-1; loop++)
    {
        year = atoi(argv[loop]);
        /* years less than 1928 are captured in the final else statement */
        if (year >= 1928 && year <= 1945 )
        {
            printf("A person born in %d is known as a Silent.\n", year);
        }
        else if (year >= 1946 && year <= 1964 )
        {
            printf("A person born in %d is known as a Boomer.\n", year);
        }
        else if (year >= 1965 && year <= 1980 )
        {
            printf("A person born in %d is known as Generation X.\n", year);
        }
        else if (year >= 1981 && year <= 1996 )
        {
            printf("A person born in %d is known as a Millenial.\n", year);
        }
        else if (year >= 1997 && year <= 2012 )
        {
            printf("A person born in %d is known as Generation Z.\n", year);
        }
        else if (year >= 2012 && year <= 2025 )
        {
            printf("A person born in %d is known as Generation Alpha.\n", year);
        }
        else
        {
            printf("No label was found for a birth year of %d.\n", year);
            if ( year  < 1928 )
            {
                printf(" - I could be wrong but \"Dead\" might be (somewhat brutally) accurate.\n");
            }
        }
    }
    printf("\n------------------------\nReturned %d results.\n", argc-1);

    return 0;
}
