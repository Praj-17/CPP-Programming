#include<iostream>
using namespace std;
int main()
{
    int m1[3][3] = {0, 11, 22,33, 0,44,55,0 , 0};
    int r =3, c =3, count = 0;;
    cout<<"******* GIVEN MATRIX******"<<endl;
    int x ;// To keep track of rown in sparse matrix
    for ( r = 0; r <= 2; r++) //Display
    {
       for ( c = 0; c <=2; c++)
       {
           cout<<"\t"<<m1[r][c];
       }
       cout<<endl;
    }
    for ( r = 0; r <= 2; r++) //Counting the number of non zero elements
    {
       for ( c = 0; c <=2; c++)
       {
           if(m1[r][c] != 0){count++;}
       }
    }
    
    int sparse[count][3]; //sparse matrix
    cout<<"The value of count is "<<count<<endl;
    sparse[0][0] = r;
    sparse[0][1] = c;
    sparse[0][2] = count;


 int p = 1;
for ( r = 0; r <= 2; r++) //Counting the number of non zero elements
    {
       for ( c = 0; c <=2; c++)
       {
           if(m1[r][c] != 0)
           {
               sparse[p][0] = r;
               sparse[p][1] = c;
               sparse[p][2] = m1[r][c];
               p++;
           }
       }
    }
    cout<<"********SPARSE MATRIX**********"<<endl;
    for ( r = 0; r < p; r++) //Display
    {
       for ( c = 0; c <=2; c++)
       {
           cout<<"\t"<<sparse[r][c];
       }
       cout<<endl;
    }

    int transpose[count][3];
   transpose[0][0] =  sparse[0][1] ;
   transpose[0][1] =  sparse[0][0] ;
   transpose[0][2] =  sparse[0][2] ;
   int q =1;
   for (int col = 0; col <c; col++)
   {
       for ( p = 1; p <= count ; p++)
       {
           if (sparse[p][1] == col)
           {
               transpose[q][0] =  sparse[p][1] ;
               transpose[q][1] =  sparse[p][0] ;
               transpose[q][2] =  sparse[p][2] ;
                 q++;
               
           }
           
       }
       
   }
    cout<<"********TRANSPOSE MATRIX**********"<<endl;
    for ( r = 0; r <= count; r++) //Display
    {
       for ( c = 0; c <=2; c++)
       {
           cout<<"\t"<<transpose[r][c];
       }
       cout<<endl;
    }
   


    return 0 ;
}