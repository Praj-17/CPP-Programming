 #include <iostream>
 using namespace std;
 // Half pyramid 
  int main()
  {
      int rows ;
      cout<<"Enter rows and coloumns separated with commas/ spaces"<<endl;
      cin>>rows;
      for (int i = 0; i < rows; i++)
      {
          for (int j = 0; j <rows-i; j++)
          {
          cout<<" ";
          }
          for (int k=0;k<= i;k++)
          {
             cout<<"*";
          }
          cout<<endl;
      }
      
      
      return 0;
  }