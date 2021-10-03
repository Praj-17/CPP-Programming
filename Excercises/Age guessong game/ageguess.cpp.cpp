/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int
main ()
{
  int max = 100;
  int min = 0;

  string user_input;
  while (max >= min)
    {

      int mid = (max + min) / 2;
      cout << "Are you " << mid << " years old?" << endl;
      cin >> user_input;

      if (user_input == "correct")
	{
	  cout << "enjoy your day" << endl;
	  break;
	}
      else if (user_input == "less")
	{
	  max = mid;
	}

      else if (user_input == "more")
	{
	  min = mid;
	}


    }




  return 0;
}
