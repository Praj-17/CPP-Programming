#include <iostream>
using namespace std;
class Shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

 public:
 void initCounter(void)
 {
     counter = 0;
 }
 void setPrice(void);
 void displayPrice(void);
};
void Shop :: setPrice(void)
{
    cout<<"Enter Id of you item no "<<counter +1<<endl;
    cin>>itemid[counter];
    cout<<"Enter the price of you item no "<<counter +1 <<endl;
    cin>>itemprice[counter];
    counter++;
}
void Shop :: displayPrice(void)
{
 for (size_t i = 0; i < counter; i++)
 {
     cout<<"The price of item with Id "<<itemid[i]<< " is\n "<<itemprice[i]<<endl;;
 }
 
}
int main()
{
    int choices ;
    cout<<"Pls Enter the number of items you want to enter"<<endl;
    cin>> choices;
    Shop dukaan;
    dukaan.initCounter();
    for (int i = 0; i < choices; i++)
    {
        dukaan.setPrice();
    }
    dukaan.displayPrice();
    
  return 0;
}