#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{ 
    string st = "Harry bhai";
    string st2;
    ofstream out("sample.txt"); // Writing a file --> Ofstream class ka object "out" and file is the argument of the constructor.
    out<<st; //Writes to a file
    ifstream in("sample2.txt"); //Reading a file ifstream class ka object "in" and file is the argument of the constructor.
    // in>>st2;
    getline(in, st2); //getline is function used tp getlines in a string.
    cout<<st2<<endl;;
    getline(in, st2); 
    cout<<st2<<endl;;
     getline(in, st2); 
    cout<<st2<<endl;;
    return 0;
}