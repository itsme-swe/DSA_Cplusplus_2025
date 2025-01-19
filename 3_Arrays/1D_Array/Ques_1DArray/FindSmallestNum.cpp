#include <iostream>
#include <array>
#include <climits>

using namespace std;

int main()
{

  int arr[] = {5, 1, 8, 10, 9, 2};

  int minVal = INT_MAX;

  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < minVal)
    {
      minVal = arr[i];
    }
  }

  cout << "The min value in array is: " << minVal << endl;

  return 0;
}