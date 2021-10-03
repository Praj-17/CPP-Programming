#include<iostream>
using namespace std;
class number
{int a;
public :
number (){a = 0;}
number(int num)
{
    a = num;
}
//  // copy constructor // When there is no copy constrctor in the program compiler itslef provides a copy instructor but it only gives values and nothing else 
number( number &obj)
{
    a = obj.a;
    cout<<"Copy constructor called."<<endl;
}
void display()
{
    cout<<"The number is "<<a<<endl;
}

};
int main()
{
 number x,y,z(10);
 z.display();
 y.display();
 x.display();
 number z1(z), z2;
 z1.display();
 z2 = z;
 z2.display(); // copy constructor is not called.
 number z3 = z;
 z3.display();
   
    return 0;
}