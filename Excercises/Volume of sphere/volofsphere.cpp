#include<iostream>
#include<cmath>
#include<string>
#include<vector>

using namespace std;
 float Volume_of_Sphere(float r)
 {
     float Vol = 3.146* pow(r,3);
     return(Vol);
 }


int main()

{
    float r;
    cout<<"Enter the value of radius"<<endl;
    cin>>r;

    cout<<"The volume of sphere is:  "<<Volume_of_Sphere(r)<<endl;
    return 0;

}