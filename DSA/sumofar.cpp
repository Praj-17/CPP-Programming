#include<iostream>
#include<string>
#include<algorithm>


using namespace std;



int main()
{
   int n;
   cout<<"Enter the size of your array"<<endl;
   cin>>n;
    int sum =0;
    int arr[n];

    cout<<"pls enter your array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
for(int i=0; i<n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;


   for(int i = 0; i<n; i++)
   {
      
       sum += arr[i]; 
   }

   cout<<"The sum of numbers in you array is "<<sum<<endl;

    return 0;
}
