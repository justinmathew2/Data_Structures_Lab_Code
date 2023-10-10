#include <iostream>
using namespace std;
int ts;
int arr[]={};
void Hashinsert()
{
    int data,n;
    cout<<"Enter an item: ";
    cin>>data;
    int i=data%ts;
    while(1)
    {
        if(arr[i]==-1)
        {
            arr[i]=data;
            return;
        }
        else
        {
            i++;
            if(i==ts)
                i=0;
            if(i==data%ts)
            {
                cout<<"No space available in the table"<<endl;
                return;
            }
        }
    }         
}

void Hashdelete()
{
    int data,item,n,i;
    cout<<"Enter the item to be deleted: ";
    cin>>data;
    i=data%ts;
    while(1)
        {
        if(arr[i]==data)
        {
            item=data;
            arr[i]=-1;
            cout<<"Deleted item is: "<<item<<endl;
            return;
        }
        else
        {
            i++;
            if(i==ts)
                i=0;
            if(i==data%ts)
            {
                cout<<"Entered data not found"<<endl;
                return;
            }
        }
    }
}
void show()
{
    for(int i=0;i<ts;i++)
    {
        if(arr[i]==-1)
            continue;
        cout<<i<<" "<<arr[i]<<endl;
    }
}

int main()
{
    cout<<"Enter the table size: ";
    cin>>ts;
    for(int i=0;i<ts;i++)
    {
        arr[i]=-1;
    }
    int n;
    while(1)
    {
        cout<<"Enter ur choice: \n1.Insert\n2.Delete\n3.Display\n4.Exit  ";
        cin>>n;
        switch(n)
        {
            case 1: Hashinsert();
                break;
            case 2: Hashdelete();
                break;
            case 3: show();
                break;
            case 4: return 0;
        }
    }
}
