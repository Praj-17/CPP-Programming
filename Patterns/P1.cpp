 #include <iostream>
 using namespace std;
 //Box Pattern
  int main()
  {
      int rows, cols;
      cout<<"Enter rows and coloumns separated with commas/ spaces"<<endl;
      cin>>rows>>cols;
      for (int i = 0; i < rows; i++)
      {
          for (int j = 0; j < cols; j++)
          {
          cout<<" * ";
          }
          cout<<endl;
      }
      
      
      return 0;
  }