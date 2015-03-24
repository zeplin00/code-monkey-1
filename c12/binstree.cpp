
#include <iostream>

#include "binstree.h"

using namespace std;

btreeElem* binstree::searchTree(btreeElem *st, int v)
{ 
  while (st && st->key !=v) {
    if (v < st->key) {
      st = st->left; 
    } else st = st->right;
  }  

  return st;
}

bool binstree::insert(int v)
{
  bool ret = true;

  cout << "Inserting val = " << v << endl;

  btreeElem *elem = new btreeElem;
  elem->key = v;  

  btreeElem *prev = NULL;
  btreeElem *current = head;

  while (current != NULL) {

    prev = current;

    if (v < current->key) {
      current = current->left;
    } else {
      current = current->right;
    }

  }

  elem->parent = prev;

  if (prev == NULL) {

    head = elem;

  } else if (v < prev->key) {

    prev->left = elem;

  } else {
	 
    prev->right = elem;

  }

  return ret;
}

