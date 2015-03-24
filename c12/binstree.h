#ifndef BINSTREE_H
#define BINSTREE_H

class btreeElem {
   
  friend class binstree;

  int key;

  btreeElem *left;
  btreeElem *right;
  btreeElem *parent;

public:
 
  btreeElem() {left = right = parent = NULL;};
  ~btreeElem() {};

};

class binstree {

  btreeElem *head;
  btreeElem *searchTree(btreeElem *start, int v);

public:

  binstree() {head = NULL;};
  ~binstree() {/* ToDo: Free tree nodes */};
  bool insert(int v);
  bool find(int v) {searchTree(head, v)? true : false;};
};

#endif
