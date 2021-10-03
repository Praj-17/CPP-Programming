#include<iostream>
#include<cmath>
#include<string>
#include<vector>

using namespace std;

int main()

{
    int dividend;
    int divisor;
    cin>>dividend>>divisor;
     
     int quotient = dividend/divisor;
     int remainder =  dividend - divisor*quotient;
     int r = dividend%divisor;

     cout<<quotient<<endl;
     cout<<remainder<<endl;
     cout<<r<<endl;



  
    return 0;
} 