#include<iostream>
using namespace std;
class Shop
{
 int id;
 float price;
 public:
 void setdata(int a, float b)
 {
     id =a;
     price = b;

 }
 void get_data(void)
 {
     cout<<"Code of this item is "<<id<<endl;
     cout<<"Code of this item is "<<price<<endl;
 }
};
int main()
{
    int size = 3;
    //general store, veggies, hardware
    // int *ptr = &size;
    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;
    int p ;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<" Enter id and price of item "<<i+1;
        cin>>p>>q;
        ptr ->setdata(p,q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
     cout<<"Item number "<<j+1<<endl;
      ptrtemp ->get_data();
     ptrtemp++;
    }
    
    
    return 0;
}