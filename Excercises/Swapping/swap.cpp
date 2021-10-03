#include<iostream>
#include<cmath>
#include<string>
#include<vector>

using namespace std;
 

int swap(int a , int b)
{
    int temp ;
     temp = a;
     a = b;
     b = temp;
     cout<<"First number after swapping is:  "<<a<<endl;
    cout<<"Second number after swapping is: "<<b<<endl;
       
     return(0); 
}



int main()

{
    int x= 4 ;
    int y = 5;
    cout<<"Enter the first number"<<endl;
    cin>>x;
    cout<<"Enter the second number"<<endl;
    cin>>y;

    swap(x,y);
   
     
    

    return 0;

}