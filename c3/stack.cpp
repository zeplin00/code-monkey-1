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
 
  	
  std::cout << "Attempting Push " << c << std::endl;
	 
  if (top == max_size) throw Overflow();

  std::cout << "Pushed " << c << std::endl;

  v[top++] = c;

  return;

}

char Stack::pop() { 

  std::cout << "Attempting Pop" << std::endl;

  if (top == 0) throw Underflow();

  char pop = v[--top];

  std::cout << "Popped " << pop << std::endl;

  return(pop);

}

