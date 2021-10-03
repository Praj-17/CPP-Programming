/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main ()
{
  float p;
  cout<< "enter the perecentage you want to calculate" << endl;
  cin>>p ;

  int total;
  cout << "Enter the total amount" << endl;
  cin>>total;
  
  float answer;
  answer = (total * p) / 100;

  cout << "the desired percetage of the given total is:" << answer << endl;
  return 0;
}
