#include<iostream>
using namespace std;
class student   // Virtual base class
{
  protected:
  int roll_no;
  public:
  void set_number(int a)
  {
      roll_no = a;
  }
  void print_number(void)
  {
      cout<<"Your roll number is "<<roll_no<<endl;
  }

};
class Test : virtual public student{
   
    public:
     float maths;
    float physics;
    void set_marks(int a, int b)
    {
        a = maths;
        b = physics;
    }
    void print_marks()
    {
      cout<<"Your result is here "<<endl;
      cout <<"MATHS - "<<maths<<endl;
      cout <<"Physics - "<<physics<<endl;
    }
    
};

class sports: virtual public student
{
 protected :
 
 public:
 float score;
  void set_score(float a)
  {
    a = score;
  }
  void print_score()
  {
   cout<<"your PT score is "<<score<<endl;
  }

};
class result : public Test, public student
{
 private: 
 float total;
 public: 
 void dispaly()
 {
     total = maths + physics +score;
     print_number();
     print_marks();
     cout<<"Your total score is "<<endl;
 }
};
int main()
{
    result harry;
    harry.set_number(4100);
    harry.set_marks(12,14);
    return 0;
}