/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cout<< "input your number"<<endl;
    cin>> n;
             int sum=0;
             int originaln = n;
             while(n>0){
             int lastdigit=n%10;
             sum= sum + pow(lastdigit,3);
             n=n/10;
             
             }
             
             if (sum == originaln){
             
               cout<< "THIS IS AN ARMSTRONG NUMBER"<<endl;
             }
             
             else {
                 cout<<"THIS IS NOT AN ARMSTRONG NUMBER"<< endl;
             }     
    return 0;
}
