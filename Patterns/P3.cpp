 #include <iostream>
 using namespace std;
 //Inverted half Pyramid Pattern
  int main()
  {
      int rows;
      cout<<"Enter rows"<<endl;
      cin>>rows;
      for (int i = 0; i < rows; i++)
      {
          for (int j = 0; j < rows -i; j++)
          {
          cout<<"*";
          }
          cout<<endl;
      }
      
      
      return 0;
  }