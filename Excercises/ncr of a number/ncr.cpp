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
  int main()
   {   int n , r, nCr;
      cout<<"Pls enter the value of n and r respectively"<<endl;
      cin>>n>>r;
      if (r>n)
      {
          cout<<"Pls enter a valid number\n 'r' should be less than or equal to 'n'"<<endl;
      }
      else
      {
         nCr = nfact(n,r)/factorial(r);
      }
      printf("The value of  %d C %d is %d\n", n,r,nCr);
     
      
    
        return 0;
 }