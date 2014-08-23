#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "array_stack.h"

#include "stack_user.h"

/* 
 * Abstract User Defined Types (Classes !!)
 */

main(int argc, char **argv, char **envp)
{

  Array_stack s_ref(10);
  
  use_gstack(s_ref);

  exit (0);

}
