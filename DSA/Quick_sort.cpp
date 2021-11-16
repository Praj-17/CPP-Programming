#include<iostream>
using namespace std;

int partition(int a[], int low , int high)
{
    int i, j , pi,temp;
    i = low-1;
    j = 0;
    pi = high; 
    for(j = low; j<=pi-1; j++)
    {
        if(a[j]<a[pi])
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } 
    //Reallocate the pivot elemet to i+1
    temp = a[i+1];
    a[i+1] = a[pi];
    a[pi] =temp;

    return (i+1);
}

void quicksort(int a[], int low ,int high)
{
    int pi;
    if(low <high){
    pi = partition(a, low, high);
    quicksort(a, low, pi-1); //for elements before pivot
    quicksort(a, pi+1, high);} // for elements after pivot
}
int main()
{               //0 1 2  3  4 5 6  7 8 9
    int a[10]  ={1,46,58,7, 8,6,4,25,2,5};
    int low =0; int high = 9;
    int x;
    cout<<"\n The original data = \n";
    for(x=0; x<=9;x++)
    {
        cout<<'\t'<<a[x];
    }
    x = partition(a, low, high);
    cout<<"\n the Pivot of element  ="<<x<<endl;
    cout<<"\n After partition = \n";
    quicksort(a,low, high);
    for (x =0; x<= 9; x++)
    {
    cout<<"\t"<<a[x];}
    return 0;
}