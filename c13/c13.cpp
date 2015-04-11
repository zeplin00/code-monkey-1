#include <iostream>
#include <string>
#include <map>

using namespace std;

void reverseChars(char *s, int strt, int end)
{

  if (!s || (strt >= end)) return;

  int i=strt, j=end;
  for (; i<j; i++, j--)
  {
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
  } 

  return;

}

void reverseWords(char *s)
{
  if (!s) return;

  int len = strlen(s);

  // Exchange all chars
  // 
  reverseChars(s, 0, len-1); 

  // Now restore the words
  // 
  int wStart=0, wEnd=0;

  while (wStart < len) {
    while ((wStart<len) && isspace(s[wStart])) wStart++;
    wEnd=wStart+1;
    while ((wEnd<len) && !isspace(s[wEnd])) wEnd++;
    reverseChars(s, wStart, wEnd-1);
    wStart=wEnd;
  }
  
  return;
}

int findNonDup(const char *s)
{
  if (!s) return -1;

  int len = strlen(s);

  map<char, bool> myMap;

  for (int i=0; i<len; i++) {

    char c = s[i];

    if (myMap.find(c) != myMap.end()) {
      myMap[c] = true;
    } else {
      myMap[c] = false;
    }
  }

  for (int i=0; i<len; i++) {
    if (myMap[s[i]] == false) return i;
  }

  return -1;

}

int main(int argc, char *argv[], char **envp)
{
  
  int ret = findNonDup(" "); 

  char *p = new char[20];

  strcpy(p, "Foo Bar");

  cout << "Reversing = " << p << endl;

  reverseWords(p);

  cout << "Reversed = " << p << endl;

  return 0;

}
