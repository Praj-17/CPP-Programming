#include<iostream>
using namespace std;
/*
case1 :
class B: public A 
{
order of execution of constructor -> first A() then B () since A is the base class
};
case 3
class A : public B, public C
{
order of execution of constructor -> B(), C() and then A()
};

case 3
class A: public B vitual public C
{
order of execution of constructor -> first C then B and then A
},

*/
class Base1
{
 int data1;
 public:
 Base1(int i)
 {
     data1 = i;
     cout<<"Base class 1 constructor called"<<endl;
 }
 void print_data_base2()
{
    cout<<"The value of data is "<<data1<<endl;
}
};
class Base2
{
 int data2;
 public:
 Base2(int i )
 {
     data2 = i;
     cout<<"Base class 2 constructor called"<<endl;
 }
 void print_data_base1()
{
    cout<<"The value of data is "<<data2<<endl;
}
};

class Derived : public Base2, public Base1
{
    int derived1, derived2 ;
    public:
    Derived(int a, int b, int c, int d): Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout<<"Derieved class constructor called "<<endl;
    }
     void print_data_derived()
{
    cout<<"The value of data is "<<derived1<<endl;
    cout<<"The value of data is "<<derived2<<endl;
}


};
int main()
{
    Derived harry(1,2,3,4);
    harry.print_data_derived();

    
    return 0;
}