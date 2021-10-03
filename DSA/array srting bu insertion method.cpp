/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

  for (int i = 0; i < n; i++)
    {
      cout << arr[i] << endl;
    }


  cout << "you sorted array by insertion type is" << endl;

  for (int i = 1; i <= n; i++)
    {
      int current = arr[i];
      int j = i - 1;
      while (current < arr[j] && j >= 0)
	{
	  arr[j + 1] = arr[j];
	  j--;
	}
      arr[j + 1] = current;
    }

  for (int i = 0; i < n; i++)
    {
      cout << arr[i] << endl;
    }



  return 0;
}
