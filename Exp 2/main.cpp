/*Demonstrate the working of a stack of size N using an array. The elements of the stack may be assumed to be of type integer. The
three operations to be supported are: (a) Push, (b) Pop, (c) Display. The program should print appropriate messages for stack
overflow, and stack underflow.*/
#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int a;
    cout<<"\n Enter the size of the array: ";
    cin>>a;
    int stk[a],n,d,i;
    int top=-1;
    while(1)
    {
    cout<<"\n Choices of Stack operation:";
    cout<<"\n\n 1.Push";
    cout<<"\n 2.Pop";
    cout<<"\n 3.Display";
    cout<<"\n 4.Exit";
    cout<<"\n\n Enter the operation to be done:";
    cin>>n;
    switch(n)
     {
     case 1:

         if(top==a-1)
         {
             cout<<"\n Stack is full"<<endl;

         }
         else

         {
             cout<<"\n Enter the element:";
             cin>>d;
             top++;
             stk[top]=d;

         }
         break;



     case 2:
        {
        if(top==-1)
        {
            cout<<"\n\n Stack is empty"<<endl;
        }

        else{

            cout<<"\n\n Popped item: "<<stk[top]<<endl;
            top--;
        }
        }
        break;
     case 3:
         if(top==-1)
         {
             cout<<"\n Stack is empty"<<endl;
         }
        else
        {
            cout<<"\n Stack elements are: ";
            for(i=top;i>=0;i--)
            cout<<stk[i]<<" ";
        }
        break;
     default:
         exit(0);

     }}
    return 0;
}

