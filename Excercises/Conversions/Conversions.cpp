 #include <iostream>
 #include<string>
 #include<bits/stdc++.h>
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
 int Octal_to_Decimal(int n )
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
         x *= 8;
     }
     return ans;
 }
 int Hexadecima_to_Decimal(string str)
 {
    int last_digit  = 0;
    int ans = 0;
    int s = str.size();
    int x = 1; // x represents the power of 2 that is to be multiplied.
    for(int i =s-1; i>=0; i--)
    {
       if (str[i]>='0' && str[i]<= '9')
       {
           ans+= x*(str[i] -'0'); //Here as u know if a char array is treated like an int array the operation takes place on its ascii value....here since we are substracting the the ascii value of '0' with the ascii value of of the charecte at index str[i] the differnce will eventually give us the desired number.
       }
       else if(str[i] >= 'A' && str[i]<= 'F')
       {
           ans+= x*((str[i] -'A') +10);
       }
       
       x*=16;
    }
    return ans;
 }
 int Decimal_to_Binary(int n)
 { int x =1;
  int ans = 0; 
   do
    {
        x*=2;
    } while(x<=n);

    
    while (n>0)
    {
        int last_digit = n/x;
        n -= last_digit*x;
        ans = (ans*10) + last_digit;
        x /= 2;
    }
  return ans;
 }
//  int Decimal_to_octal(int n)
//  {
     
//  }

  int main()
  {
      int n ;
      cin>>n;
    //   cout<< Octal_to_Decimal(n)<<endl;
    // string str;
    // cin>>str;
    cout<< Decimal_to_Binary(n);
    

      return 0;
  }