
#include <iostream>

#include "binstree.h"

using namespace std;

int binstree::treeSucc(btreeElem *st)
{
  if (!st) return -1;

  if (st->right) {
    btreeElem *ret = minTree(st->right); return ret->key; 
  }

  btreeElem *p = st->parent;

  while (p && p->right == st) {
    st = p;
    p = p->parent;
  }

  return (p? p->key: -1);

}

int binstree::treePred(btreeElem *st)
{

  if (!st) return -1;

  if (st->left) {
    btreeElem *ret = maxTree(st->left); return ret->key; 
  }

  btreeElem *p = st->parent;

  while (p && p->left == st) {
    st = p;
    p = p->parent;
  }

  return (p? p->key: -1);

}

btreeElem* binstree::minTree(btreeElem *st)
{ 
  while (st && st->left) st = st->left;
  return st;
}

btreeElem* binstree::maxTree(btreeElem *st)
{
  while (st && st->right) st = st->right;
  return st;
}

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

