#include<iostream>
#include<cmath>
#include<string>
#include<vector>

using namespace std;

class calculator
{
    public:
    int a;
    int b;
int sum(float a , float b )
{
    return a+b;
}

int mul(float a , float b)
{
    return a*b;    
}

int sub(float a , int b)
{
   int sub = a-b;

    return (sub);
}

float div( float a , float b)
{
    
    return (a/b);
}

float moddiv(int a, int b)
{
    return(a%b);
}

float percentage(float a , float b)
{
    float percentage = div(a,b)*100;
    return(percentage);
}




};


int main()

{ 
    int a ; int b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter the operation you want to perform"<<endl;
    cout<<"1.sum"<<endl; 
    cout<<"2.sub"<<endl;
    cout<<"3.mul"<<endl; 
    cout<<"4.div"<<endl;
    cout<<"5.moddiv"<<endl;
    cout<<"6.percentage"<<endl;

    int User_input; cin>>User_input;
    calculator obj;
     float sum = 0; float mul = 0; float sub = 0; float div = 0; float moddiv = 0; float percentage= 0;
    
     switch(User_input)
     {
       case 1:      sum = obj.sum(a,b);
                   cout<<sum<<endl;
                   break;
       case 2:      sub= obj.sub(a,b);
                   cout<<sub<<endl;
                    break;
       case 3:      mul= obj.mul(a,b);
                   cout<<mul<<endl; 
                    break;
       case 4:      div= obj.div(a,b);
                   cout<<div<<endl;  
                    break;
       case 5:      moddiv= obj.moddiv(a,b);
                   cout<<moddiv<<endl;
                    break;   
       case 6:      percentage= obj.percentage(a,b);
                   cout<<percentage<<endl;
                    break;                          

       default: cout<<"invlaid operation"<<endl; 
                   break;                                         
     }
    return 0;

}