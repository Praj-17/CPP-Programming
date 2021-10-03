#include<iostream>
using namespace std;
int count =0 ;
class num
{

public:
    num()
    {
      count ++;
      cout<<"This is the time when constructor is called for object number"<<count<<endl;
    };
    ~num()
    {
        cout<<"This is the time when my destructor is called for object number"<<count<<endl;
        count--;
    }
};



int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Createing first object num1"<<endl;
    num num1 ;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating 2 more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;

    }
    cout<<"back to main"<<endl;


    return 0;
}
