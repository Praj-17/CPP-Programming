#include <iostream>

using namespace std;

char stack[20];
int top=-1;

void push(char element)
{
   // top++;
    stack[++top]=element;
}

char pop()
{
    return(stack[top--]);
}

int priority(char operation)
{
    if(operation=='^') return 3;     // highest priority
    if(operation=='*'||operation=='/')  return 2;
    if(operation=='+'||operation=='-')  return 1;
    
    return 0;
}
//---------------------------------------------------------------

int main()
{
    char infix[20], postfix[20];
    int i,k;
    char ch,chx;
    
    cout<<"\n Enter infix expression: ";
    cin>>infix;
    
    push('#');
    
    k=0;
    for(i=0;infix[i]!='\0';i++)
    {
       ch=infix[i];
       
       cout<<"\n ch = "<<ch<<" Stack = "<<stack;
       
       if(ch=='(')
       push(ch);
       else
       if(isalnum(ch))
       postfix[k++]=ch;
       else
       if(ch==')')
       {
           while(stack[top]!='(')
            postfix[k++]=pop();
            
           chx=pop();
        }
        else  //operator +,-,*,/,^    
        {
            while(priority(stack[top])>=priority(ch))
            postfix[k++]=pop();
            
            push(ch);
        }
    }
    
    while(stack[top]!='#')
    postfix[k++]=pop();
    
    postfix[k]='\0';
    
    cout<<"\n The Postfix expresion = "<<postfix;
    
    return 0;
}