#include<iostream>
#include<vector> // It can be used as a dynamic memory allocation
using namespace std;
template <class T>
void display(vector <T> &v)
{ cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector <int> vec1; //zero length integer vector
    vector <char> vec2(4); // 4-element charecter vector
    vector <char> vec3(vec2); // 4-elment charecter vector from vec2
    vector <int> vec4(6,3); // 6 element vector of 3s
    display (vec1);
    vec2.push_back('5');
    display (vec2);
    display (vec4);


    
    // int element;
    // int size;
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector"<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // // vec1.pop_back();
    // display(vec1);
    // vector <int>  :: iterator iter = vec1.begin();
    // vec1.insert(iter+2,4,566);
    // display(vec1);
    
    return 0;
}