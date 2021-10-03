 #include <iostream>
 using namespace std;
 //Half pyramdid using numbers
  int main()
  {
      int rows;
      cout<<"Enter rows and coloumns separated with commas/ spaces"<<endl;
      cin>>rows;
      for (int i = 0; i < rows; i++)
      {
          for (int j = 0; j < i+1; j++)
          {
          cout<< i+1 ;
          }
          cout<<endl;
      }
      
      
      return 0;
  }