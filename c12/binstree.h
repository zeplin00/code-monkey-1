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
 
  int treeSucc(btreeElem *st);
  int treePred(btreeElem *st);
  btreeElem* minTree(btreeElem *st);
  btreeElem* maxTree(btreeElem *st); 
  btreeElem* searchTree(btreeElem *start, int v);

public:

  binstree() {head = NULL;};
  ~binstree() {/* ToDo: Free tree nodes */};

  int succ(int v) { return treeSucc(searchTree(head, v));}
  int pred(int v) { return treePred(searchTree(head, v));}
  int min() {btreeElem *ret = minTree(head); return (ret? ret->key: -1);}
  int max() {btreeElem *ret = maxTree(head); return (ret? ret->key: -1); }
  bool insert(int v);
  bool find(int v) {searchTree(head, v)? true : false;};
};

#endif
