#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
    public:
    void setid(void)
    {
        salary = 122;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }

    void getid()
    {
        cout<<"The id of this employee is  "<<id<<endl;
    }


};
int main()
{
    Employee fb[15];  //array of objects
    for (int i = 0; i < 15; i++)
    {
        // call your functions here 
       fb[i].setid();
       fb[i].getid(); //This are example functions
    }
    
  return 0;
}