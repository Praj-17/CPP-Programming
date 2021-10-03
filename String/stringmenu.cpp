#include <iostream>
using namespace std;
int main()
{
  char s1[20], s2[20];
  int x, y;
  int choice;
  cout << "Enter your choice" << endl;
  cout << "1.Lenght" << endl;
  cout << "2.Concatenate" << endl;
  cout << "3.Copy " << endl;
  cout << "4.Reverse " << endl;
  cin >> choice;
  switch (choice)
  {
  case 1: // Length of the string
    cout << ("Enter a string\n") << endl;
    ;
    cin >> s1;
    int len;
    for (int x = 0; s1[x] != '\0'; x++)
    {
      len++;
    }
    printf("\nThe length of the string is %d", len);
    break;
  case 2:
    cout << ("\nEnter the string a\n") << endl;
    ;
    cin >> s1;
    cout << ("\nEnter the string b\n") << endl;
    ;
    cin >> s2;
    int i, j;
    for (i = 0; s1[i] != '\0'; i++)
      ;
    for (j = 0; s2[j] != '\0'; j++)
    {
      s1[i] = s2[j];
      i++;
    }
    s1[i] = '\0';
    cout << "The Concatenated string  is " << s1 << endl;
    break;
  case 3:
    cout << ("Enter the string a") << endl;
    ;
    cin >> s1;
    for (int i = 0; s1[i] != '\0'; i++)
    {
      s2[i] = s1[i];
    }
    cout << ("The copied string b is: ") << s2 << endl;
    ;
    break;
  case 4:
    cout << "Enter string: ";
    cin >> s1;

    cout << "The string is " << s1;

    for (x = 0; s1[x] != '\0'; x++)
      ;
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
    break;

  default:
    cout << "Pls enter a valid choice." << endl;
    break;
  }

  return 0;
}