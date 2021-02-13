#include <stdio.h>
#include <stdlib.h>

# attribution: https://cmd.inp.nsk.su/old/cmd2/manuals/unix/UNIX_Unleashed/ch08.htm

main ( )
{
   int index;
   char *sayings[6] = {
  "To Err is human. To really foul things up takes a COMPUTER.",
"Rome wasn't built in a day, why should this system be?",
  "Do unto others and run!",
  "Do unto others, then split!",
  "Oh well, I can't think of any saying now.",
  "It's later than you think." };

   printf("\\\" This file produced by a program!\n");
   printf(".ad l \n");
   printf(".nf \n");
   printf(".pl 9i \n");
   printf(".ll 6.5i \n");
   printf(".sp 20 \n");
   printf(".ce 2 \n");
   printf("Sayings\n as of \\n(mo/\\n(dy/\\n(yr \n");
   printf(".bp 1 \n");
   printf(".tl \'\\d\\dSayings\'\' \\n(mo/\\n(dy/\\n(yr \' \n");
   printf(".sp 1 \n");
   printf(".ce 1 \n");
   printf("\\fB First Set of Sayings \\fP \n");
   for (index = 0; index < 6; index++)
   {
      printf(".sp 1 \n");
      printf("%s\n", sayings[index]);
   }
}
