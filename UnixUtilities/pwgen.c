/* pwgen.c

   Author:       Richard A. Forth
   Description:  Windows implementation of pwgen, based on unix utility of the same name
   Platform:     Windows 10
   Compiler:     Code::Blocks / MinGW / gcc
   License:      MIT License - see below.


Copyright 2021 Richard A. Forth

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


*/


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pwGen(int n, int p) {

  // Initialize counter
  int i;
  int x;
  int randomizer = 0;

  // Seed the random-number generator
  // with current time so that the
  // numbers will be different every time
  srand((unsigned int)(time(NULL)));

  // Array of numbers
  char numbers[] = "0123456789";

  // Array of small alphabets
  char letter[] = "abcdefghijklmnoqprstuvwyzx";

  // Array of capital alphabets
  char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

  // Array of all the special symbols
  // char symbols[] = "!@#$^&*?";

  int rowcount = 0;
  int rowmax = 4;

  // array to store the password
  char password[n];

  // generate a loop for the number of passwords to be created
  for(x=0;x<=p-1;x++)
   {
      // To select the randomizer
      // inside the loop
      randomizer = rand() % 3;

      // Iterate over the range [0, n]
      for (i = 0; i < n; i++) {
       if (randomizer == 1) {
         password[i] = numbers[rand() % 10];
         randomizer = rand() % 4;
         printf("%c", password[i]);
       }
       //else if (randomizer == 2) {
       //  password[i] = symbols[rand() % 8];
       //  randomizer = rand() % 4;
       //  printf("%c", password[i]);
       //}
       else if (randomizer == 2) {
         password[i] = LETTER[rand() % 26];
         randomizer = rand() % 4;
         printf("%c", password[i]);
       }
       else {
         password[i] = letter[rand() % 26];
         randomizer = rand() % 4;
         printf("%c", password[i]);
       }
    }
    rowcount++;
    if (rowcount < 4) {
      printf(" ");
    }
    else
    {
      rowcount = 0;
      printf("\n");
    }
  }
}


int main(int argc, char *argv[]) {


  if (argc == 3 )
  {
    char *a = argv[1];
    int numchars = atoi(a);
    char *b = argv[2];
    int numgen = atoi(b);

    // DEBUG
    // printf("Length of passwords: %d\n", numchars);
    // printf("Number of passwords: %d\n", numgen);

    pwGen(numchars, numgen);

  } else {
     printf("ERROR: Wrong number of arguments.\nUSAGE: pwgen.exe <numchars> <numpasswords>\n");
  }

  return 0;
}
