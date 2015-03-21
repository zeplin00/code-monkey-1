#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// Pull in the array implementation of stack
// 
#include "array_stack.h"

// Code that uses the abstract interface. 
// This code might have existed before the array stack implememtation was written
extern void use_gstack(Stack& s_ref);

/* 
 * Abstract User Defined Types (Classes !!)
 */

main(int argc, char **argv, char **envp)
{

  Array_stack s_ref(10);
  
  use_gstack(s_ref);

  exit (0);

}
