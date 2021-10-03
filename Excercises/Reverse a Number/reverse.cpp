#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main()

{
    long long int n;
    cin>>n;
    int lastdigit;
    long long reverse= 0;
    while(n>0)
    {
        int lastdigit = n%10;
       
       reverse =reverse*10 +lastdigit;
        n = n/10;
    }
    cout<<reverse<<endl;
    return 0;
} 