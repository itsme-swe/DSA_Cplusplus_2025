#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vec;

  vector<int> vec1 = {1, 2, 3};

  vector<int> vec2(4, 1);

  cout << vec.size() << endl; // Return 0

  cout << vec1.size() << endl; // Returns 3

  // 🔸 For Each loop
  for (auto ele : vec1)
  {
    cout << ele << " ";
  }
  cout << endl;

  cout << vec2.size() << endl; // Returns 4

  // 🔸 Iterator
  for (auto it = vec2.begin(); it != vec2.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  // op: 1 1 1 1

  return 0;
}