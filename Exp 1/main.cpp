/*Create a M x N Matrix. Write function for calculating address of a cell in that matrix which is stored in row-major and column-major.*/
#include <iostream>

using namespace std;

int main()
{
    int i,j,a[5][5],n,m;
    int *pp[5][5];
    int *p=&a[0][0];
    cout<<"\n Enter the number of rows and columns: ";
    cin>>m>>n;
    cout<<"\n                              Row Major calculation\n\n  ";
    cout<<"\n Manually calculated address: "<<"\t\t"<<" Compiler calculated address: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            pp[i][j]=p+(i*n+j);
            cout<<" "<<pp[i][j]<<"\t\t\t\t "<<&a[i][j]<<endl;
        }
    }
    cout<<"\n                              Column Major calculation\n\n  ";
    cout<<"\n Manually calculated address: "<<"\t\t"<<" Compiler calculated address: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            pp[i][j]=p+(j*m+i);
            cout<<pp[i][j]<<"\t\t\t\t "<<&a[j][i]<<endl;
        }
    }
    return 0;
}
