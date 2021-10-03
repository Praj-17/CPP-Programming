#include<iostream>
using namespace std;
int main()
{
    int m1[4][4] = {1,0,0,4,0,0,7,0,9,0, 11, 0,13,14, 0, 16};
    int r, c, count = 0;;
    
    int x ;// To keep track of rown in sparse matrix
    for ( r = 0; r <= 3; r++) //Display
    {
       for ( c = 0; c <=3; c++)
       {
           cout<<"\t"<<m1[r][c];
       }
       cout<<endl;
    }
    for ( r = 0; r <= 3; r++) //Counting the number of non zero elements
    {
       for ( c = 0; c <=3; c++)
       {
           if(m1[r][c] != 0){count++;}
       }
    }
    
    int sparse[count][3]; //sparse matrix
    cout<<"The value of count is "<<count<<endl;
    sparse[0][0] = 4;
    sparse[0][1] = 4;
    sparse[0][2] = count;


 x = 1;
for ( r = 0; r <= 3; r++) //Counting the number of non zero elements
    {
       for ( c = 0; c <=3; c++)
       {
           if(m1[r][c] != 0)
           {
               sparse[x][0] = r;
               sparse[x][1] = c;
               sparse[x][2] = m1[r][c];
               x++;
           }
       }
    }
    for ( r = 0; r < x; r++) //Display
    {
       for ( c = 0; c <=2; c++)
       {
           cout<<"\t"<<sparse[r][c];
       }
       cout<<endl;
    }
    return 0 ;
}