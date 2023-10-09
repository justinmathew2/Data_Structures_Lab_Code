/* Linked list implementation of stack and queue*/
#include <iostream>
using namespace std;
struct node
{
    int info;
    node*link;
};
node*FRONT=NULL;
node*REAR=NULL;
node*top=NULL;
node*temp;

//Stack operations
void push(int data)
{
            temp=new node;
            temp->info=data;
            temp->link=top;
            top=temp;
}

int pop()
{
    if (top==NULL)
    {
        cout<<"Stack is empty\n";
        cout<<endl;
    }
    else
    {
        int data;
        temp=top;
        data=top->info;
        top=top->link;
        delete(temp);
        cout<<"Deleted element is: "<<data<<endl<<endl;
    }
}
void display1()
    {
        node*monk;
        monk=top;
        cout<<"\nThe elements in the stack are: ";
        while (monk!=NULL)
        {
            cout<<monk->info<<"->";
            monk =monk->link;
        }
        cout<<"NULL"<<endl<<endl;
    }


// Queue operations
void addque(int data)
{
    temp=new node;
    if(temp==NULL)
    {
        cout<<"\n Queue is full";
        return;
    }
    else
        {
             temp->info=data;
             temp->link=NULL;
        }
    if(FRONT==NULL)
        {
            FRONT=REAR=temp;
            return;
        }
        else
        {
            REAR->link=temp;
            REAR=temp;
            return;
        }
}
int delq()
{
    if (FRONT==NULL)
    {
        cout<<"\nQueue is empty\n"<<endl;
    }
    else
    {
        int data;
        temp=FRONT;
        data=FRONT->info;
        FRONT=FRONT->link;
        cout<<"\nThe deleted element is: "<<data<<endl<<endl;
        delete(temp);
        return data;
    }
}
void display()
    {
        node*monk;
        monk=FRONT;
        cout<<"\nThe elements in the queue are: ";
        while (monk!=NULL)
        {
            cout<<monk->info<<"->";
            monk =monk->link;
        }
        cout<<"NULL\n"<<endl;
    }

int main()
{
    int op;
    cout<<"\n Choices to do.....\n";
    cout<<"\n 1.Stack operations";
    cout<<"\n 2.Queue operations";
    cout<<"\n 3.Exit";
    cout<<"\n\n Enter your choice: ";
    cin>>op;
    cout<<"\n";
    switch(op)
    {
    case 1:
        int c;
        while(1)
            {
                cout<<"Functions to perform:\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
                cout<<"\nEnter your choice: ";
                cin>>c;
                switch(c)
                {
                    case 1:
                        cout<<"Enter a number: ";
                        int n;
                        cin>>n;
                        cout<<"\n";
                        push(n);
                        break;
                    case 2:
                        pop();
                        break;

                    case 3:
                        display1();
                        break;
                    case 4:
                        return 0;
                        break;
                }
            }
    case 2:
        int opt;
        while(1)
            {
                cout<<"Functions to perform:\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n";
                cout<<"\nEnter your choice:";
                cin>>opt;
                switch(opt)
                {
                    case 1:
                        cout<<"\nEnter a number: ";
                        int n;
                        cin>>n;
                        cout<<"\n";
                        addque(n);
                        break;

                    case 2:
                        delq();
                        break;

                    case 3:
                        display();
                        break;
                    case 4:
                        return 0;
                        break;
                }
            }
    case 3:
        return 0;

    }
}
