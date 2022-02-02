/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>

using namespace std;
bool
isPrime (int n)
{
  for (int i = 2; i <= sqrt (n); i++)
    {
      if (n % i == 0)
	{
	  return false;
	}
    }
  return true;
}

int
main ()
{

  int b;
  cin>>b;
  int i = 2;
  for (int i = 2; i <= b; i++)
    {
      if (isPrime (i))
	{
	  cout << i <<" ";
	}
    }
  return 0;
}
