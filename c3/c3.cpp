#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "stack.h"

/* 
 * Modular Programming
 */

main(int argc, char **argv, char **envp)
{

  try {

    while (true) Stack::push('c');

  } catch (Stack::Overflow) {
    
    std::cout << "Oops: Caught Stack Overflow" << std::endl;

  }


  try {

    while (true) Stack::pop();

  } catch (Stack::Underflow) {
    
    std::cout << "Oops: Caught Stack UnderFlow" << std::endl;

  }

  exit (0);
}

