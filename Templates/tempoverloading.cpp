#include<iostream>
using namespace std;
template <class T>
class Harry{
   public:
   T data;
   Harry(T a)
   {
       data = a;
   }
   void dispaly()
   {
       cout<<data;
   }
 };
int main()
{
 Harry <int> h(5);
 cout<<h.data;
 h.dispaly();  

    return 0;
}