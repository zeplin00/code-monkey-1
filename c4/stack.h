#ifndef STACK_H
#define STACK_H

namespace Stack {

  struct Rep;

  typedef Rep& stack;

  stack create();
  void destroy(stack s);
  void push(stack s, char c);
  char pop(stack s);

  class Bad_create { };
  class Bad_destroy { };
  class Bad_push { };
  class Bad_pop { };

}

#endif
