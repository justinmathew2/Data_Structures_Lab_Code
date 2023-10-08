//Program to convert infix expression to postfix expression
#include <iostream>

using namespace std;

char stk[10];
int top=-1;

char pop()
{
    char data;
    if(top==-1)
        return -1;
    else
    {
        data=stk[top];
        top--;
        return data;
    }
}

void push(char x)
{
    top=top+1;
    stk[top]=x;
}

int priority(char x)
{
    if(x=='(')
        return 0;
    else if(x=='+'||x=='-')
        return 1;
    else if(x=='*'||x=='/')
        return 2;
    else
        return -1;
}

int main()
{
    char x;
    char xep[10];
    cout<<"\n Enter infix expression: ";
    char *e;
        cin>>xep;
        e=xep;
    cout<<"\n Postfix expression: ";

    while(*e!='\0')
    {
        if(isalnum(*e))
            cout<<*e;
        else if(*e=='(')
            push(*e);
        else if(*e==')')
        {
            while((x=pop())!='(')
                    cout<<x;
        }
        else
        {
            while(priority(stk[top])>=priority(*e))
                cout<<pop();
                push(*e);
        }
        e++;
    }
    while(top!=-1)
    {
        cout<<pop();
    }

}
