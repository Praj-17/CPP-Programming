 #include <iostream>
 using namespace std;
void input_arr(int arr[],int n)
 {
     
     for (int i = 0; i < n; i++)
     {
     cout<<"Enter the "<<i<<"th element"<<endl;
     cin>>arr[i];    
     }
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     
     

 }
  int main()
  {   int n;
     cout<<"Enter the size of array"<<endl;
     cin>>n;
     int arr[n];
    input_arr(arr,n);
      
      return 0;
  }   