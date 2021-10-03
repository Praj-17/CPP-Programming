 #include <iostream>
 using namespace std;
 //Number pattern
  int main()
  {
      int n;
    //   int count =1;
      cout<<"Enter n"<<endl;
      cin>>n;
      for (int i = 0; i <n; i++)
      {
          for (int j = 1; j <n-i ; j++)
          {
          cout<<" ";
          }
          for (int count = 1; count <=i+1; count++)
          {
             cout<<count<<" ";
              
          }
          
          cout<<endl;
      }
      
      
      return 0;
  }