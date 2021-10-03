#include<iostream>
using namespace std;
class Base1
{
public:
void greet()
{
    cout<<"How are you? "<<endl;
}
};
class Base2
{
    public:
void greet()
{
    cout<<"Good Morning "<<endl;
}

};
class B
{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    }
};
class D : public B
{
    int a;
    public:
    // D's new say function will over write the base class's function
    void say(){
        cout<<"Hello My beautiful people "<<endl;
    }
};
class derieved : public Base1,public Base2
{
  int a;
  public:
  void greet(){
      Base2 :: greet(); // ambiguity resolved
  }
};
int main()
{
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();
    derieved d;
    d.greet(); //Ambiguity 1
    B b;
    D objd;
    b.say();
    objd.say(); // ambiguity 2

    return 0;
}