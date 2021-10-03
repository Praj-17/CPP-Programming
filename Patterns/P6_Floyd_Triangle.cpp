 #include <iostream>
 using namespace std;
 //Floyd's Triangle
  int main()
  {
      int rows, count =1;
      cout<<"Enter rows and coloumns separated with commas/ spaces"<<endl;
      cin>>rows;
      for (int i = 0; i < rows; i++)
      {
          for (int j = 0; j < i+1; j++)
          { 
           cout<< count<<" ";
           count++;
          }
          cout<<endl;
      }    
      return 0;
  }