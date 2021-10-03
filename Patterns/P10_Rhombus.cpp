 #include <iostream>
 using namespace std;
 //Box Pattern
  int main()
  {
      int n;
      cout<<"Enter rows and coloumns separated with commas/ spaces"<<endl;
      cin>>n;
      for (int i = 0; i < n; i++)
      {
          for (int j = 0; j<2*n-i-1; j++)
          {
           if (j<n-i-1)
           {
               cout<<" ";
           }
           else
           {
               cout<<"*";
           }
          }
          cout<<endl;
      }
      
      
      return 0;
  }