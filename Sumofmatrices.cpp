#include<iostream>
using namespace std;

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,m,n,p,q;                    //Input rows and columns of both the matrices A and B
    cout<<"Enter the no. of rows and coulmns of matrix A "<<endl;
    cin>>m>>n;
    cout<<"Enter the no. of rows and columns of matrix B "<<endl;
    cin>>p>>q;
    if((m==p) && (n==q))
    cout<<"Matrices can be added"<<endl;
    else
    cout<<"Matrices cannot be added"<<endl;
    cout<<"Input matrix A"<<endl;           //Loop for matrix A so that it cannot exceed the limited value
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    cout<<"Input matrix B"<<endl;
    for(i=0;i<p;i++)                    //Loop for matrix B so that it cannot exceed the limited value
    {
        for(j=0;j<q;j++)
        cin>>b[i][j];
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
    cout<<"The sum of the matrices is "<<endl;
    for(i=0;i<p;i++)
    {
        cout<<"\n";
        for(j=0;j<q;j++)
        cout<<"  "<<c[i][j];
    }
    return 0;
}