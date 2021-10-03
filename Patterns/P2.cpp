 #include <iostream>
 using namespace std;
 //Rectangle pattern
  int main()
  {
      int rows, cols;
      cout<<"Enter rows and coloumns separated with commas/ spaces"<<endl;
      cin>>rows>>cols;
      for (int i = 0; i < rows; i++)
      {
          for (int j = 0; j < cols; j++)
          { 

              if (i == 0 || i ==rows -1 || j == 0 || j ==cols-1)
                {
                cout<<"*";
                }
            // else if (j == 0 || j ==cols-1)
            //     {
            //         cout<<"*";
            //     }
            else
            {
                cout<<" ";
            }
            
            
              
          }
          cout<<endl;
      }
      
      
      return 0;
  }