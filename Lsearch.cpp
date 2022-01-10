#include <iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
int Lsearch(int[],int,int);          //Lsearch(the array, its size, search_item)
int main()
{
    int ar[50],n,item,index;
    cout<<"Enter the desired array size(max.50) "<<endl;
    cin>>n;
    cout<<"Enter Array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Enter Element to be searched for "<<endl;
    cin>>item;
    index=Lsearch(ar,n,item);
    if(index==-1)
        cout<<"Sorry!! Given element could not be found"<<endl;
    else
        cout<<"Element found at index "<<index<<", Position "<<index+1<<endl;
    return 0;
}
int Lsearch(int ar[],int size,int item)     //function to perform Linear Search
{
    for(int i=0;i<size;i++)
    {
        if(ar[i]==item)
        return i;                          //return index of item in case of successful search
    }
    return -1;                             //the control will reach here only when item is not found
}