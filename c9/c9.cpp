#include <iostream>

using namespace std;

struct listelem {
  listelem *next;
  void *data;
};

typedef listelem* LISTPTR;

LISTPTR l_insert(LISTPTR head, void *data)
{
  LISTPTR newElem = new listelem;

  // Check for OOM
  //

  newElem->data = data;
  newElem->next = NULL;

  if (!head) return newElem;
 
  newElem->next = head->next;
  head = newElem;

  return head;  
}

LISTPTR reverseList(LISTPTR head)
{
  // Reverse the singly-linked list
  //
  LISTPTR revList = NULL;

  for (LISTPTR l = head; l; l=l->next) {
    revList = l_insert(revList, l->data); 
  }

  return revList;
}

int main(int argc, char *argv[], char **envp)
{
  LISTPTR l1 = NULL;	  
  LISTPTR l2 = reverseList(l1);


  return 0;
}


