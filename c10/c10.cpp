#include <iostream>

#include "hash.h"

using namespace std;

int main(int argc, char *argv[], char **envp)
{
  cout << "A basic (string->void*) hash class" << endl;

  cout << "Creating hash" << endl;

  hash_table *h = new hash_table (100);

  cout << "Deleting hash" << endl;

  delete h;

  return 0;
}
