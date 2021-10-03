#include <iostream>
#include<cmath>
using namespace std;
class complex
{
  int a , b;
  public:
  complex(int x , int y); //Default constructor
  void printnumber()
  {
    cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
  }
};
complex :: complex(int x, int y) // 
{
  a = x;
  b = y;
}
class point
{ int x, y;
     public:
     friend point distance(point o1, point o2);
     point(int a, int b)
     {
         x = a;
         y = b;
     }
     point (int a) // constructor Overloading 
     {
         x = a;
         y = 0;
     }
     void displayPoint()
     {
         cout<<"The point is ("<<x<<","<<y<<")"<<endl;
     }
   

};
 point distance(point o1, point o2)
    {
        
        float f = sqrt(((o2.x-o1.x)*(o2.x-o1.x) +(o2.y-o1.y)*(o2.y-o1.y))) ;
        cout<<"The distance between 2 point is "<<f<<endl;
    }
int main()
{
    //Implicit call
complex a(4,5);
a.printnumber();
 //Explicit call
 complex b = complex(3,23);
b.printnumber();

point p(0,0);
p.displayPoint();
point q(3,4);
q.displayPoint();

distance(p, q);
  return 0;
}