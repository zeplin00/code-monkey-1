#include <stdio.h>
#include <stdlib.h>

main(int argc, char **argv, char **envp)
{
  int *p = (int *)7;

  p++;

  printf ("Pointer is %d\n", p);

  exit (0);

}

