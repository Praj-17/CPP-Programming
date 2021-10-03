 #include <iostream>
 using namespace std;
 //This Program converts almost all sorts of functions into numneric or dcimal format
 //Binary to decimal
 int Binary_to_decimal(int n)
 {
     //n must be in the form of 0 and 1
     int last_digit  = 0;
    int ans = 0;
    int x = 1; // x represents the power of 2 that is to be multiplied.
     while (n>0)
     {
         last_digit = n%10;
         ans = ans + last_digit *x;
         n = n/10;
         x *= 2;
     }
     return ans;
     
 }
  int main()
  {
      int n ;
      cin>>n;
      cout<< Binary_to_decimal(n)<<endl;
      return 0;
  }