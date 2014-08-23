#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "stack.h"

/* 
 * Data Abstraction
 */

main(int argc, char **argv, char **envp)
{

  try {

    Stack::stack s1 = Stack::create();

    try {
  
      while (true) Stack::push(s1, 'c');
  
    } catch (Stack::Bad_push) {
      
      std::cout << "Oops: Caught Stack Bad_push" << std::endl;
  
    }
  
  
    try {
  
      while (true) Stack::pop(s1);
  
    } catch (Stack::Bad_pop) {
      
      std::cout << "Oops: Caught Stack Bad_pop" << std::endl;
  
    }

    try {
  
      Stack::destroy(s1);

    } catch (Stack::Bad_destroy) {

      std::cout << "Oops: Caught Stack Bad_destroy" << std::endl;

    }


  } catch (Stack::Bad_create) {

    std::cout << "Oops: Caught Stack Bad_create" << std::endl;

  }


  exit (0);
}

