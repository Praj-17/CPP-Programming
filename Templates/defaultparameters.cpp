#include<iostream>
using namespace std;
template < class T1 = int, class T2 = float>
class Prajwal
{
    public:
    T1 a;
    T2 b;
    Prajwal(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }

};
int main()
{
    Prajwal < > p(2,4.8);
    p.display();
;    return 0;
}