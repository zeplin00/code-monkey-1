#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "stack.h"

/* 
 * User Defined Types (Classes !!)
 */

Stack s_var1(10); 

void f(Stack& s_ref, int i)
{
  Stack s_var2(i);

  Stack *s_ptr = new Stack(20);


  s_var1.push('a');

  s_var2.push('b');

  s_ref.push('c');

  s_ptr->push('d');



  s_ptr->pop();

  s_ref.pop();

  s_var2.pop();

  s_var1.pop();

  delete s_ptr;

  return;

}

main(int argc, char **argv, char **envp)
{

  Stack s_ref(10);
  
  f(s_ref, 20);

  exit (0);

}
