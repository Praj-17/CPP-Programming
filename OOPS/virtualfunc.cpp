#include<iostream>
#include<cstring>
using namespace std;
class CWH
{
 protected:
 string title;
 float rating;
 public:
 CWH(string s, float r)
 {
     title = s;
     rating = r;
 }
 virtual void display()
 {

 }
};
class CWHvideo : public CWH{
 int videolength;
 public:
   CWHvideo(string s, float r, int vl): CWH(s,r){
       videolength = vl;

   }
   void display()
   {
       cout<<"This is an amazin video with title "<<title<<endl;
       cout<<"Ratings: "<<rating<<"Out of 5 stars "<<endl;
       cout<<"Length of this video is "<<videolength<< " Minutes"<<endl;
   }
};
class CWHText: public CWH{
 int words;
 public:
   CWHText(char*s, float r, int wc): CWH(s,r){
       words = wc;
   }
    void display()
   {
       cout<<"This is an amazin video with title "<<title<<endl;
       cout<<"Ratings: "<<rating<<" Out of 5 stars "<<endl;
       cout<<"Length of this video is "<<words<< " Minutes"<<endl;
   }
};

int main()
{
    string title = new char[30];
    float rating, vlen;
    int words;
      
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHvideo djvideo(title, rating, vlen);
    djvideo.display();




    return 0;
}