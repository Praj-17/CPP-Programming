#include<iostream>
#include<cmath>
#include<string>
#include<vector>

using namespace std;
//Temp converter

float ftoc( float c ,float f)
{
    c= (f-32)*5/9;
    return(c);

}
float ctof( float c ,float f)
{
   f= c*5/9+32; 
   return(f);
}
float ktoc( float c ,float f, float k)
{
  c = k+273;
  return(c);
}

float ktof( float c ,float f, float k)
{
    c = ktoc(c,f,k);
    f = ctof(c,f);
    return(f);
}





int main()

{
    float k , f, c;
   
    
    

    cout<<"Enter the conversion you want to perform"<<endl;
    cout<<"1.C to F"<<endl;
    cout<<"2.F to C"<<endl;
    cout<<"3.K to F"<<endl;
    cout<<"4.K to C"<<endl;
   
   int User_input;
   cin>>User_input;
   switch(User_input)
   {
       case 1:  cout<<"Enter temp in degree Celsius"<<endl;
    cin>>c;
       cout<<"The temp in degree fahrenhite   is:   "<<endl;
       cout<<ctof(c,f);
       break;
       case 2: cout<<"Enter temp in degree Fahrenhite"<<endl;
    cin>>f;
       cout<<"The temp in degree celsius   is:   "<<endl;
      
       cout<<ftoc(c,f);
       break;

       case 3:cout<<"Enter temp in degree Kelvin"<<endl;
    cin>>k;
        cout<<"The temp in degree fahrenhite   is:   "<<endl;
        
       cout<<ktof(c,f,k);
       break;
       case 4:cout<<"Enter temp in degree Kelvin"<<endl;
    cin>>k;
        cout<<"The temp in degree fahrenhite   is:   "<<endl;
       cout<<ktoc(c,f,k);
       break;

   }

    return 0;
} 