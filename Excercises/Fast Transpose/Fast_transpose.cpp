#include <iostream>

using namespace std;

int main()
{
    int a[3][4]={0,5,0,6,     // original matrix  
                 2,0,4,0,
                 0,0,7,0};   //5 non zero elements
                 
    int b[6][3],t[6][3];    // sparse matrix and trasnspose matrix
    
    int total[4]= {0,0,0,0} ;   // size of total  array = #columns in original matrix
    int index[5]={1,0,0,0,0};  // size of index array = size of total array +1
                                // index [0] is always 1
                              
    int r,c,v,x,p,loc;
    //--------------------------------------------------------------------------------- 
    
    cout<<"\n Original Matrix = \n";
    for(r=0;r<3;r++)      //1. Display original matrix
    {
        cout<<"\n";
        for(c=0;c<4;c++)
            cout<<"\t"<<a[r][c];
    }
   
   for(c=0;c<4;c++)             // 2. Determine total array  c=0,1,2,3
        for(r=0;r<3;r++)
            if(a[r][c]!=0)      // number of non zero elements in column wise manner
            total[c]++;

    
    cout<<"\n Total array = \n";  // 3. Display total array
    for(x=0;x<4;x++)
        cout<<"\t"<<total[x];
    
    for(x=1;x<5;x++)              // 4. Determine index array
        index[x]=index[x-1]+total[x-1];
        
    cout<<"\n Index array = \n";  // 5. Display index array
    for(x=0;x<5;x++)
        cout<<"\t"<<index[x];

     //6. Determine sparse matrix   
     //6.1 Fill up the 0th row
    b[0][0]=3;  //#rows       
    b[0][1]=4;   //#columns
    b[0][2]=5;   //#non zero elements
    
    p=1;         //6.2 Fill up 1st row onwards
    for(r=0;r<3;r++)      
        for(c=0;c<4;c++)
            if(a[r][c]!=0)
            {
                b[p][0]=r;
                b[p][1]=c;
                b[p][2]=a[r][c];
                p++;
            }
    cout<<"\n Sparse Matrix = \n";      //7. Display sparse matrix
    for(p=0;p<6;p++)
    cout<<"\n\t"<<b[p][0]<<"\t"<<b[p][1]<<"\t"<<b[p][2];
    t[0][0] = b[0][1];
    t[0][1] = b[0][0];
    t[0][2] = b[0][2];
    for ( p = 1; p < 6; p++)
    {
       c = b[p][1];
       loc = index[c];
       cout<<"\n loc ="<<loc; //Strore Triplet at proper location
       
        t[loc][0] = b[p][1];
        t[loc][1] = b[p][0];
        t[loc][2] = b[p][2];
         index[c]++;
       
    }
cout<<"\n ******Transpose Matrix**********\n";
for ( p = 0; p < 6; p++)
{
    cout<<"\n\t"<<t[p][0]<<"\t"<<t[p][1]<<"\t"<<t[p][2];
}

    
    
    return 0;
    
}