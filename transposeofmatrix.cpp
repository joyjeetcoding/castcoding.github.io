#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system(" cls ");
    int a[3][3],b[3][3],i,j;
    cout<<"Enter the elements of a matrix "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cin>>a[i][j];
    }
    cout<<"Given matrix is "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Transpose of a matrix is "<<endl;
    for(i=0;i<3;i++)
    {
        cout<<endl;
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
            cout<<b[i][j]<<" ";
        }
    }
    return 0;
}