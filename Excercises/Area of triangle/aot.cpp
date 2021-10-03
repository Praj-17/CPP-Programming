#include<iostream>
#include<cmath>
#include<string>
#include<vector>

using namespace std;
//Area of triangle by herons formula

float Area(float a, float b, float c)
{
    float s;
    s= (a+b+c)/2;
    float area = pow(s*(s-a)*(s-b)*(s-c), 0.5);
    return(area);
}

int main()

{

    float a ;;
    float b ;
    float c;

    cout<<"Enter the length of first side"<<endl;
    cin>>a;
      cout<<"Enter the length of second side"<<endl;
    cin>>b;
      cout<<"Enter the length of third side"<<endl;
    cin>>c;

    cout<<"Your calculated Area is:  ";
    


    cout<<Area(a,b,c)<<endl;
    return 0;
} 