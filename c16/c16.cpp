#include <iostream>
#include <vector>


// Move zeroes to the right
//
using namespace std;

int main(int argc, char *argv[], char **envp)
{

  vector<int> inp;

  inp.push_back(4);
  inp.push_back(6);
  inp.push_back(0);
  inp.push_back(3);
  inp.push_back(0);
  inp.push_back(0);
  inp.push_back(0);
  inp.push_back(3);

  int numElem = inp.size();

  int numZeroes = 0;

  for (int i=0; i<numElem; i++)
  {
    if (inp[i] == 0) numZeroes++;
    else {
      inp[i-numZeroes] = inp[i];
      cout << "Moving index " << i << " to " << (i-numZeroes) << endl;
    }
  }

  for (int i=0; i<numZeroes; i++)
  {
    inp[numElem-i-1] = 0;
    cout << "Setting index " << (numElem-i-1) << " to zero" << endl;
  }

  return 0;
}


