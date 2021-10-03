#include<iostream>
#include<list>
using namespace std;
// void display( list <int> &l1)
// {
//     cout
// }
//LINKED LISTS 
int main()
{
    list <int> list1; //list of length 0
    list <int> list2(7); //Empty list of length 7
   
    list1.push_back(5);
    list1.push_back(32);
    list1.push_back(3);
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(2);
    list <int> :: iterator iter;
    iter = list1.begin();
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;

    return 0;
}