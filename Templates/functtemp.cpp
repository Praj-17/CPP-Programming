#include<iostream>
using namespace std;
template<class T1> 
T1 average(T1 a, T1 b)
{
 return ((a+b)/2.0);
}
int main()
{
 int  a;
    a = average(5, 7);
    cout<<a<<endl;
    return 0;
}