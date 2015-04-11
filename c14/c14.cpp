#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(int argc, char *argv[], char **envp)
{
  vector<int> inp;
  map<int, int> myMap;
  map<int, int>::iterator myMapIter;

  inp.push_back(1);
  inp.push_back(3);
  inp.push_back(5);
  inp.push_back(10);

  int len = inp.size();

  int target = 5;

  for (int i=0; i<=len; i++) myMap[inp[i]] = i;

  for (int i=0; i<len; i++) {
    for (int j=i+1; j<len; j++) {
      int residual = target - inp[i] - inp[j];
      myMapIter = myMap.find(residual); 
      if ((myMapIter != myMap.end()) && (myMapIter->second != i) && (myMapIter->second != j)) {
        cout << "Found" << endl;
        cout << "i = " << i << endl;
        cout << "j = " << j << endl;
        cout << "Residual = " << residual << endl;
	return 0;
      }
    }
  }

  cout << "Not Found" << endl;

  return 0;
}

