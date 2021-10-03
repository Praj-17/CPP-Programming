#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
//function overloading

class Apnacollege
{
    public :
    void fun()
        {
         cout<<"i am a function with no arguements"<<endl;

        }
        void fun(int x)
        {
            cout<<"i am a function with integer "<<endl;
        }
        void fun(double x)
        {
            cout<<"i am a function with double "<<endl;
        }
    
};
 
int main()
{
  Apnacollege obj;
  obj.fun();
  obj.fun(4);
  obj.fun(6.3);



    return 0;
}
 