#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("sample.txt"); //opening a file
    fout<<"This is me"<<endl; //writing to a file
    fout.close();
 

    return 0;
}