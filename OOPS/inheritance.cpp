#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class A{

    public:
    void funcA()
    {
        cout<<"class A inherited"<<endl;
    }

    private :

    void funcP()
    {
        cout<<"function p used"<<endl;
    }

};

class C 
{
    public :

void funcC()
{
 cout<<"class c inherited"<<endl;
}
};



class B : public A , public C
{
    public:

    void funcB()
    {
   cout<<"class B inherited"<<endl;
    } 
};



class D : public B
{

};

int main()
{
  B b; D d;
  d.funcA();
  d.funcB();
  d.funcC();
    return 0;
}
