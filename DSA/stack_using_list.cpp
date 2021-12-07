#include <iostream>

using namespace std;
struct node // global declaration of structure for node in LL
{
    int data;
    struct node *next;
};
struct node *head = NULL; // global declaration for pointer to head of LL
                          // Dont forget to initialise it to NULL

void push();
void pop();
void display();

int main()
{
    int choice;

    while (1)
    {

        cout << "\n----------------------------------------";
        cout << "\n1. Push\n2. Pop \n3. Diaplay Stack \n4. Exit";
        cout << "\n Enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout <<"push";
            push();
            break;

        case 2:
            cout << "\nPop";
            pop();
            break;

        case 3:
            cout << "\nDisplay";
            display();
            break;

        case 4:
            cout << "\nExiting...";
            exit(0);

        default:
            cout << "\n Enter appropriate choice";
        }
    }
}
void push()
{
    int val;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "Memory value to be pushed";
    }
    else
    {
        cout << "Enter value to be pushed :";
        cin >> val;
        ptr->data = val;
        ptr->next = NULL;
        if (head == NULL)
        {
            head = ptr;
        }
        else
        {
            ptr->next = head;
            head = ptr;
        }
        cout << "The value is pushed onto stack ";
    }
}
void pop(){
    int val;
    struct node *ptr;
    if (head == NULL)
    {
        cout<<"stack is empty";

    }
    else{
        val=head->data;
        ptr=head;
        head=head->next;
        free(ptr);
        cout<<endl<<val<<"is popped";
    }
    
}
//---------------------------------------------
void display(){
    struct node *ptr;
    if (head==NULL)
    {
        cout<<"the stack is empty:";
    }
    else{
        cout<<"the stack element ";
        ptr=head;
        while (ptr!=NULL)
        {
            cout<<endl<<ptr->data;
            ptr=ptr->next;
        }
        
    }
}