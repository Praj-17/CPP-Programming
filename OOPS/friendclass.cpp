#include <iostream>
using namespace std;
class complex; //forward declaration;

class calculator
{
    public :
    int add(int a, int b)
    {
    return a+b;
    }
    int sumRealcomplex(complex o1, complex o2);
    int sumcompcomplex(complex o1, complex o2);
    

};
   class complex 
{

    int a, b;
    //Declarting indivisuall functions as friends so make whole class friend to overcome it

    // friend int calculator ::sumRealcomplex(complex o1, complex o2);
    // friend int calculator ::sumcompcomplex(complex o1, complex o2);
    friend class calculator;
    public:
        void setnumber(int n1 , int n2)
       {
        a = n1;
        b = n2;
        }
        void printbumber()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
        
};

int calculator :: sumRealcomplex(complex o1, complex o2)
{
    {
    return (o1.a+ o2.a);
    }
}
int calculator :: sumcompcomplex(complex o1, complex o2)
{
    {
    return (o1.b+ o2.b);
    }
}
int main()
{
     complex c1, c2,sum;
    c1.setnumber(1,4);
    c2.setnumber(5,8);
    c1.printbumber();
    c2.printbumber();
    calculator calc;
    int res = calc.sumRealcomplex(c1,c2);
    cout<<"The sum of real part of c1 and c2 is "<<res<<endl;
 

  return 0;
}