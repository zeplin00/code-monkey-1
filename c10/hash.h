#ifndef HASH_H
#define HASH_H

#include <vector>
#include <list>

using namespace std;

class hash_table {

  int size;

  vector<list<void *> > table;

public:	
  enum hash_ret {HASH_OK, HASH_NOTFOUND, HASH_DUPLICATE, HASH_ERROR};

  hash_table(int sz) {
    size = sz;
    table.resize(sz); 
  }
  ~hash_table() {}

  hash_ret hash_insert(string key, void *data);
  hash_ret hash_find(string key) {};
  hash_ret hash_delete(string key) {};

};

#endif
