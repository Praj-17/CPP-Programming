#include<iostream>
#include<string>
#include<algorithm>


using namespace std;
int sumofar(int n, int ar[])
{
    int i = 0;
    int sum = 0;
     for ( i = 0; i<n; i++)
    {
        cin>> ar[i];
    }
  while (n>0 && ar[i]<=1000)
    {
    
    for( i = 0; i<n; i++)
    {
        sum += ar[i];
    }

    }
    return sum;
}

int main()
{
    int n;
    int ar[n];
    cin>>n;
    cout<<sumofar(n, ar)<<endl;

    return 0;
}
