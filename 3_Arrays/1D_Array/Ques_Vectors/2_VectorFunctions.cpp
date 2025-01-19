#include <iostream>
#include <vector>

using namespace std;

int main()
{

  // 🔸 Declaration
  vector<int> vec;

  vec.push_back(10); // function to add element in vector
  vec.push_back(12);
  vec.push_back(14);
  vec.push_back(18);
  vec.push_back(20);

  for (auto ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;
  // op: 10 12 14 18 20

  vec.pop_back(); // function to remove element from back

  for (auto ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;
  // op: 10 12 14 18

  cout << vec.at(2) << endl; // Return an element present at given index value

  cout << vec.front() << endl; // Return the starting value

  cout << vec.back() << endl; // Return last value of an vector

  return 0;
}