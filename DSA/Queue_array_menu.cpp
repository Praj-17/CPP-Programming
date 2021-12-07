#include <iostream>

using namespace std; 


int maxsize=10;
int queue[10];
int front = -1, rear = -1;    // initially queue will be empty


void insertQ();  // Q full
void deleteQ();  
void displayQ(); 


int main()  
{  
    int choice;   
    while(1)   
    {     
        
        cout<<"\n---------------------------------";
        cout<<"\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n";  
        cout<<"\nEnter your choice :";  
        cin>>choice;
        
        switch(choice)  
        {  
            case 1:  
            insertQ();  
            break;  
            case 2:  
            deleteQ();  
            break;  
            case 3:  
            displayQ();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            cout<<"\nEnter valid choice.\n";  
        }  
    }  
}  
//--------------------------------------------------------------------------------
void insertQ()
{
    int n;
    cout<<"\n Enter element to be inserted in queue"<<endl;
    cin>>n;
    if(rear == maxsize-1) //full
    {
        cout<<"\n Queue is Full, Can't add element \n";
    }
    else
    {
        if(front == -1 && rear ==-1)
        {
            front = rear = 0;
        }
        else
        {
            rear +=1;
        }
        queue[rear] =n; /// adding element in queue
        cout<<"\n"<<n<<" is added to the queue";
    }
}








//_______________________________________________


void deleteQ()
{
    int n;
    if(front ==-1 && rear ==-1)
    {
        cout<<"\n Queue is empty. Can't Delete."<<endl;
    }
    else
    {
        n = queue[front];
        if(front == rear) // There is single element in queue
        {
            front = rear =-1;
        }
        else // ther are more than one element in the quueue
        {
            front +=1;
        }
        cout<<"\n"<<n<<"is deleted from the queue"<<endl;
    }
}
//_______________________________________________


void displayQ()
{
    int i; 
    if(front == -1 && rear == -1)
    {
    cout<<"\n"<<"Queue is Empty"<<endl;
        
    }
    else
    {
        for(i=front; i<=rear; i++)
        {
            cout<<"\t"<<queue[i];
        }
    }
}