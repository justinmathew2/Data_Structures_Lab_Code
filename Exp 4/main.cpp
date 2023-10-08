/*To simulate the working of a queue of integers using an array with the following operations: (a) Insert(b) Delete
(c) Display(d) queue full (e)queue empty*/
#include <iostream>
#include<stdlib.h>
#define Max 5
int item,n,a;
int Front=-1,rear=-1;
int q[Max];

using namespace std;
void addq(int item)
{
    if(rear==Max-1)
        cout<<"\n Queue is full"<<endl;
    else{
        cout<<"\n\n Enter the element for insertion: ";
        cin>>item;
        rear=rear+1;
        q[rear]=item;
        cout<<"\n Inserted element is: "<<q[rear]<<endl;
    }
    if(Front==-1){
        Front=0;
    }

}
void delq(int item)
{
    if(Front==-1){
        cout<<"\n Queue is empty"<<endl;}
    else{
        item=q[Front];
        cout<<"\n Deleted item: "<<q[Front]<<endl;
        if(Front==rear)
            Front=rear=-1;
        else
            Front=Front+1;
    }
    }
void display()
{
    cout<<"\n The Queue elements are: ";
    for(int i=Front;i<=rear;i++){
        cout<<q[i]<<" ";
    }
}


int main()
{
    x:
    cout<<"\n Operation to be done:\n 1.EnQueue.\n 2.DeQueue. \n 3.Display. \n 4.exit.\n";
    cout<<"\n Enter your choice(1-4): ";
    cin>>n;
    switch(n){
case 1:
    addq(item);
    goto x;
    break;
case 2:
    delq(item);
    goto x;
    break;
case 3:
    display();
    goto x;
    break;
case 4:
    exit(0);
    }

}
