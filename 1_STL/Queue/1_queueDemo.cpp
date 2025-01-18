#include <iostream>
#include <queue>

using namespace std;

int main()
{

  queue<int> q;

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;

  cout << q.size() << "\n"; // Returns 0 bcoz now it's empty
  return 0;
}

// op: 1 2 3 4 5