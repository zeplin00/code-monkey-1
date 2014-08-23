#ifndef STACK_H
#define STACK_H

class StackError {

  int err_type;

public:

  StackError(int t): err_type (t) { };

  ~StackError() { };

};

class Stack {

public:

  virtual void push(char c) = 0;

  virtual char pop() = 0;

};

#endif
