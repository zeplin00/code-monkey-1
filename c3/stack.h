#ifndef STACK_H
#define STACK_H

namespace Stack {

  void push(char);

  char pop();

  class Underflow {};

  class Overflow {};

}

#endif
