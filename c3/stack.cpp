#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "stack.h"

namespace Stack {

  const int max_size = 5;
  char v[max_size];
  int top = 0;
}

void Stack::push(char c) {
  
  if (top == max_size) throw Overflow();

  std::cout << "Pushing " << c << std::endl;

  v[top++] = c;

  return;

}

char Stack::pop() { 

  if (top == 0) throw Underflow();

  char pop = v[--top];

  std::cout << "Popping " << pop << std::endl;

  return(pop);

}

