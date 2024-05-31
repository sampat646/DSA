#include<bits/stdc++.h>

using namespace std;

int main() {
  //initailization of unoreder set
  unordered_set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the unordered set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  // output Elements present in the unordered set: 10 9 8 7 2 1 3 4 5 6
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in unordered set" << endl;
  // output 2 is present in unordered set

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  // output Elements after deleting the first element: 9 8 7 2 1 3 4 5 6

  cout << "The size of the unordered set is: " << s.size() << endl;
  // output The size of the unordered set is: 9

  if (s.empty() == false)
    cout << "The unordered set is not empty " << endl;
  else
    cout << "The unordered set is empty" << endl;
  // output The unordered set is not empty
  s.clear();
  cout << "Size of the unordered set after clearing all the elements: " << s.size();
  // output Size of the unordered set after clearing all the elements: 0
}
