//  a) ABCDEFGHIJ
// b) AAAAAAAAAA
// c) JJJJJJJJ
// d) AAAAAAJJJJ
//What will be the output of the following code
  #include <iostream>
    using namespace std;
    int main()
    {
        char arr[20];
        int i;
        for(i = 0; i < 10; i++)
            *(arr + i) = 64 + i;//Take Away:- if numeric values are passed to a char array it will consider it to be the ascii values of the charecters .
        *(arr + i) = '\0';
        cout << arr;
        return(0);
        
    }