#include <iostream>

#include "binstree.h"

using namespace std;

int main(int argc, char *argv[], char **envp)
{

  cout << "Creating new binary search tree" << endl;
  binstree* T = new binstree;

  T->insert(3);
  T->insert(10);
  T->insert(5);
  T->insert(4);
  T->insert(8);

  for (int i = 0; i <= 10; i++)
    if (T->find(i)) cout << "Found val = " << i << endl ;

  cout << "Deleting binary search tree" << endl;

  delete T;
	 
  return 0;
}
