#include <iostream>
using namespace std;
class Employee
{
    int id;
   static int count;
 public:
 void Setdata(void)
{
    cout<<"Enter the Id"<<endl;
    cin>>id;
    count++;
}
void getdata(void)
{
    cout<<"The id of the entered employee is "<<endl;
    cout<<id<<endl<<"And this is employee number: "<<count<<endl;;;
}

static void getcount(void)
    {
     cout<<"The value of count is "<<count<<endl;
    }
};
int Employee :: count =1000; //default value i szero
int main()
{
    Employee harry, prajwal , Aishu;
    // harry.id =1; can not do thiss since id is private.
    harry.Setdata();
    harry.getdata();
    Employee :: getcount();
    
    prajwal.Setdata();
    prajwal.getdata();
    Employee :: getcount();

    Aishu.Setdata();
    Aishu.getdata();
    Employee :: getcount();

  return 0;
}