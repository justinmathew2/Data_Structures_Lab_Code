/*To implement the working of implementation of linear search and binary search.*/
#include <iostream>
#include<stdlib.h>
using namespace std;

void lsearch(int a[5],int data)
{
    for(int i=0;i<5;i++)
    {
        if (a[i]==data)
        {
            cout<<"\n Data '"<<data<<"' found at position "<<i<<endl;
            return;
        }
        }
            cout<<"\n Data to be searched not found"<<endl;

}
void bsearch(int a[5],int data)
{
    int left =0;
    int right=5;

    while(left<=right)
    {
        int mid=(left+right)/2;

        if (a[mid]==data)
        {
            cout<<"\n Data '"<<data<<"' found at "<<mid<<endl;
            return;
        }
        else if(a[mid]>data)
        {
            right=mid-1;
        }
        else if(a[mid]<data)
        {
            left=mid+1;
        }
    }
    cout<<"\n Data not found"<<endl;
}

int main()
{
    int opt,dat;
    int a[5];
    while(1)
    {
    cout<<"\n Choices to do ";
    cout<<"\n----------------";
    cout<<"\n 1.Linear search";
    cout<<"\n 2.Binary search";
    cout<<"\n 3.Exit";
    cout<<"\n\n Enter  your choice: ";
    cin>>opt;
    switch(opt)
    {
    case 1:
         cout<<"\n Enter  the array elements: ";
         for(int i=0;i<5;i++)
         {
             cin>>a[i];
         }
         cout<<"\n Enter the data to be searched: ";
         cin>>dat;
         lsearch(a,dat);
         break;
    case 2:
        cout<<"\n Enter the array elements: ";
        for(int i=0;i<5;i++)
        {
            cin>>a[i];
        }
        cout<<"\n Enter the data to be searched: ";
        cin>>dat;
        bsearch(a,dat);
        break;
    case 3:
        exit(0);
    default:
        cout<<"\n Sorry wrong option"<<endl;
        break;
        }
        }
   return 0;
}
