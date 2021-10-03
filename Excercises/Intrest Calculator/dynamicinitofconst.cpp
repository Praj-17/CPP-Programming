#include<iostream>
using namespace std;
class BankDeposit
{
 int principal,  years;
 float rate, returnvalue;
 public:
 BankDeposit(){}
 BankDeposit(int p, int n, int r); // for float enterd in percentage
 BankDeposit(int p , int n, float r); // fpr float entered in decimal
 void show();
 
};
BankDeposit ::  BankDeposit(int p , int n, float r)
{
    principal = p;
    years = n;
    rate = r;
    returnvalue = principal;
    for(int i = 0; i <n; i++)
    {
        returnvalue = returnvalue *(1+r);
    }

}
BankDeposit ::  BankDeposit(int p , int n, int r)
{
    principal = p;
    years = n;
    rate = r;
    returnvalue = principal;
    for(int i = 0; i <n; i++)
    {
        returnvalue = returnvalue *(1+r);
    }

}
 void BankDeposit :: show()
{
    cout<<endl<<"Principal amount was "<<principal<<endl<<"Return value after "<<years<<" Will be "<< returnvalue<<endl;
}
int main()
{
    BankDeposit bd1,bd2, bd3;
    int p, y, R;
    float  r;
    cout<<"Enter the value of p, y and r"<<endl;
    cin>>p>>y>>r;
   bd1 =  BankDeposit(p, y , r);
   bd1.show() ;
   bd2 = BankDeposit(p, y, R);
   bd2.show();
    return 0;
}