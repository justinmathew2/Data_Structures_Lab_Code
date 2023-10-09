/*To implement the working of implementation of Selection and insertion sort.*/
#include <iostream>
using namespace std;

int i,j,MIN,temp,V;
void inssort()
{
    cout<<"\n*************INSERTION SORT*******************";
    cout<<"\n Enter the elements of the array : ";
    int A[5];
    for(i=0;i<5;i++)
    {
        cin>>A[i];
    }
    for( i=1;i<=4;i++)
    {
        V=A[i];
        j=i-1;
        while(j>=0 && A[j]>V)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=V;
    }
    cout<<"******************************************"<<endl;
    cout<<"The sorted elements are : ";
    for(i=0;i<=4;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}


void selsort()
{

    cout<<"\n**********SELECTION SORT****************";
    cout<<"\n Enter the elements of the array : ";
    int A[5];
    for(i=0;i<5;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<5;i++)
    {
        MIN=i;
        for(j=i+1;j<5;j++)
        {
            if (A[j]<A[MIN])

                MIN=j;
}
        temp=A[i];
        A[i]=A[MIN];
        A[MIN]=temp;

    }
    cout<<"********************************************"<<endl;
    cout<<"The sorted elements are : ";
    for(i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int opt;
    while(1)
    {
    cout<<"\n CHOICES TO DO.....";
    cout<<"\n--------------------";
    cout<<"\n 1.Insertion sort";
    cout<<"\n 2.Selection sort";
    cout<<"\n 3.Exit";
    cout<<"\n\n Enter your choice: ";
    cin>>opt;
    switch(opt)
    {
    case 1:
        inssort();
        break;
    case 2:
        selsort();
        break;
    case 3:
        return 0;
    default:
        cout<<"\n Invalid choice";
    }
    }
}




