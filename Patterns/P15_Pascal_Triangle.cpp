 #include <iostream>
 #include<cmath>
 using namespace std;
 //nCr = n!
//    (n-r)! - r!
 int factorial (int n)
 {  int fact = 1;
   for (int i = 2; i <= n; i++)
   {
       fact*=i;
   }
   return fact;
 }
 int nfact(int n , int r)
 {
     int nfact =1;
     for (int  i = n; i >(n-r); i--)
     {
         nfact *= i;
     }
     return nfact;
 }
 int nCr(int n , int r)
 { int nCr;
     if (r>n)
      {
          cout<<"Pls enter a valid number\n 'r' should be less than or equal to 'n'"<<endl;
      }
      else
      {
         nCr = nfact(n,r)/factorial(r);
      }
  return nCr;
 }
  int main()
   {   int n ;
      cout<<"Pls enter the value of n "<<endl;
      cin>>n;
      
       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j <= i; j++)
           {
               cout<<nCr(i, j)<<" ";
           }
           cout<<endl;
           
       }
       
     
      
    
        return 0;
 }