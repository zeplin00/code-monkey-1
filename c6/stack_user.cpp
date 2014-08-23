#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "stack.h"

#include "stack_user.h"

void use_gstack(Stack& s_ref)
{

  try {

    while (true) s_ref.push('c'); 
    /* s_ref.push('c'); */

  } catch (StackError& se) {

    std::cout << "Caught Overflow " <<  std::endl;    
 
  }

  try {

    s_ref.pop();

  } catch (StackError& se) {

    std::cout << "Caught Underflow " << std::endl;    
  }

  return;

}
