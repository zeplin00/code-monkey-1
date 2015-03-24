#include <iostream>
#include <map>
#include <string>

using namespace std;

int main (int argc, char *argv[], char **envp)
{
  map<string, void *> myMap;

  myMap["Foo1"] = NULL;
  myMap["Foo2"] = NULL;
  myMap["Foo3"] = NULL;
  myMap["Foo4"] = NULL;

  if (myMap.find("Foo1") != myMap.end()) {
    cout << "Found Foo1" << endl;
  } else {
    cout << "Did not find Foo1" << endl;
  }

  if (myMap.find("Foo5") != myMap.end()) {
    cout << "Found Foo5" << endl;
  } else {
    cout << "Did not find Foo5" << endl;
  }

  return 0;
}

