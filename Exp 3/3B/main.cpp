//Develop a C++ program to evaluate a postfix expression using stack.
#include <iostream>
#include<math.h>

using namespace std;

int top=-1;
int stk[20];

void push(int x)
{
    top++;
    stk[top]=x;
}
 int pop(int y)
 {
     int x;
     x=stk[y];
     top--;
     return x;
 }

int main()
{
    char arr[20];
    cout<<"Enter postfix expression: ";
    cin>>arr;
    char *p;
    p=arr;
    int temp;
    while(*p!='\0')
    {
        if(isalnum(*p))
            push(*p-48);
        else if(*p=='+')
        {
            temp=pop(top)+pop(top);
            push(temp);
        }
         else if(*p=='-')
        {
            temp=pop(top-1)-pop(top+1);
            push(temp);
        }
         else if(*p=='*')
        {
            temp=pop(top)*pop(top);
            push(temp);
        }
         else if(*p=='/')
        {
            temp=pop(top-1)/pop(top+1);
            push(temp);
        }
        else if(*p=='^')
        {
            temp=pow(pop(top-1),pop(top));
            push(temp);
        }
        p++;
    }
    while(top!=-1)
    {
        cout<<"POSTFIX EVALUATED RESULT: "<<stk[top];
        top--;
    }
}
