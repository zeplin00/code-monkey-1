#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <list>

using namespace std;

int main(int argc, char *argv[], char **envp)
{

  // Algorithm to traverse Graph using a depth-first ordering
  //
  int numVertices = 100;
  vector<list<int> > MyGraph(numVertices);
  int sVtx = 0;

  // Popuate Graph
  //
  //
  MyGraph[0].push_back(1);
  MyGraph[0].push_back(2);
  MyGraph[0].push_back(99);

  MyGraph[3].push_back(4);
  MyGraph[4].push_back(5);

  // Setup stack for DFS control flow
  //
  stack<int> st;
  st.push(sVtx);

  // Setup visited and completed arrays
  //
  vector<bool> visited(numVertices);
  vector<bool> completed(numVertices);

  while (st.empty() == false) {

    int top = st.top();

    if (visited[top] == true) {
      completed[top] = true;
      st.pop();
      cout << "Completed vtx = " << top << endl;
      continue;
    }

    visited[top] = true;
    cout << "Visited vtx = " << top << endl;

    list<int> fanout = MyGraph[top];

    list<int>::iterator iter = fanout.begin();
    list<int>::iterator liter = fanout.end();

    for (;iter != liter; iter++) {
      int f_vtx = *iter;
      if (!visited[f_vtx]) { st.push(f_vtx); }
    }

  }

  return 0;
}

