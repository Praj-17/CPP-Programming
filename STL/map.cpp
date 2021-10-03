#include<iostream>
#include <map>
#include <string>
// it is a dictionary
//map is an associative array
using namespace std;
int main()
{
    map <string, int> marks;
    marks["Prajwal"] = 13;
    marks["Aishu"] = 124;
    map <string, int> ::iterator iter;
    for(iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second <<"\n";
    }
    
        return 0;
}