#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "stack.h"

class Array_stack : public Stack {

  char *v;
  int max_size;
  int top;

  class Bad_size {};

public:

  Array_stack(int s) {

    top = 0;
    if ((s<0) || (s>20)) throw Bad_size();  
    max_size = s;
    v = new char(s);

  };

  ~Array_stack() {
    delete[] v;
  };

  void push(char c) {

    if (top == max_size) throw StackError(1); 

    std::cout << "Top = " << top << std::endl;

    std::cout << "Pushing " << c << std::endl;

    v[top++] = c;

  };

  char pop() {

    if (top == 0) throw StackError(2); 

    std::cout << "Top = " << top << std::endl;
    
    char c = v[--top];

    std::cout << "Popping " << c << std::endl;

    return(c);

  };

};

#endif

