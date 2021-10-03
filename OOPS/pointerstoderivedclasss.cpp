#include<iostream>
using namespace std;
class Base{
    public:
    int var1;
    void display()
    {
        cout<<"Displaying base class varaible "<<var1<<endl;
    }

};
class Derived : public Base{
public:
    int var2;
    void display()
    {
        cout<<"Displaying base class varaible "<<var1<<endl;
        cout<<"Displaying derived class varaible "<<var2<<endl;
    }
};

int main()
{
    Base *base_class_pointer;
    Derived * derived_class_pointer;
    Base obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived; //pointing base class pointer to derived class 
    base_class_pointer->var1 =34;
    // base_class_pointer->var2 =34; //will thrw an error
    base_class_pointer->display();
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var2 = 10;
    derived_class_pointer->display();

    return 0;
}