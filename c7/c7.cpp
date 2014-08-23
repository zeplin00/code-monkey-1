#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <list>

#include "stack.h"

/* 
 * Generic Programming (Templates)
 */


void f()
{

  Stack<char> sc(200); 

  Stack<int> si(45);

  sc.push('c');  

  si.push(10);  

  return;

}

main(int argc, char **argv, char **envp)
{

  f();

  exit (0);

}
