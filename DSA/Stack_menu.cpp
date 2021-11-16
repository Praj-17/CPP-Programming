
#include <iostream>

using namespace std;
int A[5];
int max = 4;
int top = -1;
int maximum = 4;

bool isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}
bool isFull()
{
    if (top == maximum)
    {
        return 1;
    }
    return 0;
}

int push(int n)
{
    if (isFull())
    {
        cout << "Stack Overflow" << endl;
        return 0;
    }
    {
        top++;
        A[top] = n;
        cout << "Pushed " << n << endl;
        return 1;
    }
}

int pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow" << endl;
        return 0;
    }
    else
    {
        top--;
        cout << "Popped " << A[top + 1] << endl;
        return 1;
    }
}
void dispaly()
{
    for (int i = top; i >= 0; i--)
    {
        cout << "\t" << i << "|" << A[top] << "\t \n";
    }
}

int main()
{
    int choice;
    int stack[5];
    int top = -1;
    int pop = top;
    int n;

    while (1)
    {

        cout << "\n----------------------------------------";
        cout << "\n1. Push\n2. Pop \n3. Diaplay Stack \n4. Exit";

        cout << "\n Enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter the number you want to push" << endl;
            cin >> n;
            push(n);
            continue;
        }
        case 2:
            if (isEmpty())
            {
                cout << "Stack Underflow" << endl;
            }
            else
            {
                top--;
                cout << "Popped " << A[top + 1] << endl;
            }
            continue;

        case 3:
        {
            dispaly();
            continue;
        }
        case 4:
            cout << "\nExiting...";
            exit(0);
        default:
            cout << "\n Enter appropriate choice";
        }
        return 0;
    }
}