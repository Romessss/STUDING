#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void DisplayVector(const vector<int>& vecInput) {
  for (int i = 0; i < vecInput.size(); i++)
    cout << vecInput[i] << ' ';
  cout << endl;
}

int main() {

  vector<int> vecIntegers;

  vecIntegers.push_back (1234);
  vecIntegers.push_back (53);
  vecIntegers.push_back (2453);
  vecIntegers.push_back (346);
  vecIntegers.push_back (876);

  DisplayVector(vecIntegers);
  
  cout << "Print the maximum element on the screen: ";
  cout << *max_element (vecIntegers.begin (), vecIntegers.end ()) << endl;

  vecIntegers.push_back (*max_element (vecIntegers.begin (), vecIntegers.end ()));

  DisplayVector(vecIntegers);

  return 0;
}