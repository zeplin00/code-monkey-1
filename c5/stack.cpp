#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "stack.h"

Stack::Stack(int s)
{
  top = 0;
  if ((s<0) || (s>20)) throw Bad_size();  
  max_size = s;
  v = new char(s);
}

Stack::~Stack()
{
  delete[] v;
}

void Stack::push(char c)
{
  if (top == max_size) throw Overflow();

  std::cout << "Pushing " << c << std::endl;

  v[top++] = c;
}

char Stack::pop()
{
  if (top == 0) throw Underflow();

  char c = v[--top];

  std::cout << "Popping " << c << std::endl;

  return(c);
}
