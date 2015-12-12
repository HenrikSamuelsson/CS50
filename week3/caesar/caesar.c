/*
 * caesar.c
 */
#include <stdlib.h>

int
main (int argc, char* argv[])
{
  int returnValue = 0;
  int k;  /* number to be used when encoding */

  if (returnValue == 0)
  {
    /* the user is only allowed to enter exactly one argument */
    if (argv != 2)
    {
      printf("Exactly one argument shall be provided.");
      returnValue = 1;
    }
  }

  if (returnValue == 0)
  {
    k = atoi(argv[1]);
    /* k shall be a positive integer */
    if (k < 1)
    {
      printf("The provided argument must be a positive integer.");
      returnValue = 1;
    }
  }

  return returnValue;
}
