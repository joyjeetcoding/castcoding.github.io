#include<iostream>

using namespace std;

int bsearch(int[],int,int);
int main()
{
    int ar[50],n,item,index;
    cout<<"Enter the desired array size(max.50)"<<endl;
    cin>>n;
    cout<<"Enter the elements(in ascending order)"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Enter the element to be searched for"<<endl;
    cin>>item;
    index=bsearch(ar,n,item);
    if(index==-1)
        cout<<"Sorry!!!Element could not be found"<<endl;
    else
        cout<<"Element found at index "<<index<<", Position "<<index+1;
    return 0;
}
int bsearch(int ar[],int size,int item)
{
    int beg,mid,last;
    beg=0;
    last=size-1;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(item==ar[mid])
        return mid;
        else if(item>ar[mid])
        beg=mid+1;
        else
        last=mid-1;

    }
    return -1;
}