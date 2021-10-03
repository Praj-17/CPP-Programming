/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
//append of strings/
using namespace std;

int
main ()
{
  string s1;
  cin >> s1;
  string s2;
  cin >> s2;
  s1.append (s2);
  cout << s1 << endl;
  cout << s2 << endl;


  return 0;
}
