#include<iostream>
#include<cmath>
#include<string>
#include<vector>

using namespace std;
//Average of any number of numbers

int main()

{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter your numbers"<<endl;
    vector <int > v;
    int sum = 0;
    for(int i = 0; i<n; i++)
    { 
        cin>>arr[i];
    }
 
 
  for(int i = 0; i<n; i++)
    { 
        cout<<arr[i]<<endl;;
    }
     for(int i = 0; i<n; i++)
    { 
        sum+=arr[i];
    }
    cout<<sum/n<<endl;
    return 0;
} 