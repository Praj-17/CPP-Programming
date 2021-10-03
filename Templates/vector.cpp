#include<iostream>
using namespace std;
template  <class  T>
class Vector
{
int size;
public:
T *arr;
Vector(T m)
{
    size = m;
    arr = new T[size];
}
T dotProduct(Vector &v)
{
    T d = 0;
    for(int i = 0; i<size; i++)
    {
        d += this ->arr[i]*v.arr[i];
        
    }
    return d;
}
};
int main()
{
    Vector<float> v1(3);
    v1.arr[0] = 0;
    v1.arr[1] = 2.4;
    v1.arr[2] = 0;
    Vector<float> v2(3);
    v2.arr[0] = 0;
    v2.arr[1] = 1;
    v2.arr[2] = 4;
    
    cout<<"The dot product is "<<endl;
    cout<<v1.dotProduct(v2)<<endl;


    return 0;
}