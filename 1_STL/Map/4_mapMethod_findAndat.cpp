#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<char, int> mp = {{'A', 101}, {'B', 301}, {'D', 201}, {'C', 101}, {'E', 505}};

  cout << mp.at('F') << endl; // Return the value if key is present otherwise throws an exception.
  return 0;
}