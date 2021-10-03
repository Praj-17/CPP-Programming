#include <iostream>
using namespace std;
class complex
{
  int a , b;
  public:
  complex(void); //Default constructor
  void printnumber()
  {
    cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
  }
};
complex :: complex(void) // 
{
  a = 0;
  b = 0;
}
int main()
{
complex a;
a.printnumber();
  return 0;
}