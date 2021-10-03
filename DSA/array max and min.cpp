/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<climits>

using namespace std;

int
main ()
{
  int n;
  cout << "enter the size of your array" << endl;
  cin >> n;

  int arr[n];

  cout << "provide input for your array" << endl;

  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

  cout << "your array input is" << endl;

  for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " " << endl;
    }
  int max = INT_MIN;
  int min = INT_MAX;

  for (int i = 0; i < n; i++)
    {
      if (arr[i] > max)
	max = arr[i];

    }

  for (int i = 0; i < n; i++)
    {
      if (arr[i] < min)
	min = arr[i];

    }
  cout << "the maximum number in this array is" << max << endl;
  cout << "the minimum number in this array is" << min << endl;

  return 0;
}
