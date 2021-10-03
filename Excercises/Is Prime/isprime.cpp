#include <iostream>

using namespace std;

bool ISPRIME(int n)
{
    for(int i = 2; i<n; i++)
    {
        if(n%i ==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a = 51;
    int b= 100;
    for(int n =a; n<b; n++)
    {
        if( ISPRIME(n) )
        {
            cout<<n<<endl;
        }
    }
    cout<<"Hello World";

    return 0;
}