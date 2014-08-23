#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

template<class T> class Stack {

 T *v;
 int top;
 int max_size;

public:

  class Underflow { };
  class Overflow { };
  class Bad_size { };

  Stack (int s) {

    top = 0;

    if ((s<0) || (s>500)) throw Bad_size();  

    max_size = s;

    v = new T(s);

  };

  ~Stack() {

    delete[] v;

  };

  void push(T c) {

   if (top == max_size) throw Overflow();

   std::cout << "Pushing " << c << std::endl;

   v[top++] = c;

  };

  T pop() {

    if (top == 0) throw Underflow();

    T c = v[--top];

    std::cout << "Popping " << c << std::endl;

    return(c);
  };

};

#endif

