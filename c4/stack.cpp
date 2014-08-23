#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "stack.h"

namespace Stack {

  static bool initialized = false;

  const int max_size = 5;

  struct Rep {
    char v[max_size];
    int top;
    int index;
  };

  const int max_stacks = 16;

  Rep stacks[max_stacks];

  bool used[max_stacks];

}

Stack::stack Stack::create()
{

  /* Find first unused stack */

  if (!initialized) {

    for (int i=0; i<max_stacks; i++) used[i] = false;

    initialized = true;

  }

  int i=0;

  while((i<max_stacks) && used[i]) i++;

  if (i==max_stacks) throw Bad_create();

  stacks[i].top = 0;

  stacks[i].index = i;

  used[i] = true;

  return (stacks[i]);
  
}

void Stack::destroy(stack s)
{

  if (!used[s.index]) throw Bad_destroy();

  used[s.index] = false;

  return;

}

void Stack::push(stack s, char c) {
  
  if (s.top == max_size) throw Bad_push();

  std::cout << "Pushing " << c << std::endl;

  s.v[s.top++] = c;

  return;

}

char Stack::pop(stack s) { 

  if (s.top == 0) throw Bad_pop();

  char pop = s.v[--s.top];

  std::cout << "Popping " << pop << std::endl;

  return(pop);

}

