#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<ctime>

using namespace std;
// all usable functions in strings

int main()

{
    string s = "sakshirajeshaherkar";
    cout<<"The string"<<s<<endl;
    cout<<"The length of the string :: "<<s.length()<<endl;
    for(int i = 0; i<s.length(); i++)
    {
        cout<<"The charecter at "<<i<<"th element is"<<s.at(i)<<endl;
    }

     for(int i = 0; i<s.length(); i++)
    {
        cout<<"The charecter at  "<<i<<"th element  using arra is"<<s[i]<<endl;
    }
    cout<<"Retrieve the substring from the 3rd position till next 5 charecters"<<s.substr(3,5)<<endl;

    cout<<"Retrieve the substring from the 3rd position till next 5 charecters"<<s.replace(3,5, "Went")<<endl;

    cout<<"Append the string end at the end  " <<s.append(" end")<<endl;

    cout<<"Append the string end at the end"<<s+ "  end"<<endl;

    cout<<"The string 'insert' inserting at third position"<<s.insert(3, "insert")<<endl;

    cout<<"Enter a sentence"<<endl;
    getline(cin, s);

cout<<s<<endl;





   
    return 0;
} 