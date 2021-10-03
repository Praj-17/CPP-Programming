#include <iostream>
using namespace std;

int main()
{
    char s1[10], s2[10];
    int x, y;

    cout << "\nEnter string: ";
    cin >> s1;

    cout << "\nThe string is " << s1;

    for (x = 0; s1[x] != '\0'; x++) ;
    x--;
    y = 0;
    while (x >= 0)
    {
        s2[y] = s1[x];
        y++;
        x--;
    }
    s2[y] = '\0';
    cout << "\n The reversed string is= " << s2;

    return 0;
}