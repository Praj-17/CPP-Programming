#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // ofstream fout("sample.txt");
    // string name;
    // fout<<"Enter your name "<<endl;
    // cin>>name;
    // fout<<"My name is " + name;
    // fout.close();
    ifstream fin("sample.txt");
    string content;
    // fin>>content;
    getline(fin, content);
    cout<<"The content of this file is "<<endl;
    cout<<content;
    fin.close(); 
    return 0;
} 