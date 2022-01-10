#include<stdio.h>
int Lsearch(int[],int,int);
int main()
{
    int ar[50],n,item,index;
    printf("Enter the desired array size(max.50)\n");
    scanf("%d",&n);
    printf("Enter the elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);             //this is used for entering the elements 
    }
    printf("Enter the element to be serached for\n");
    scanf("%d",&item);
    index=Lsearch(ar,n,item);
    if(index==-1)
    printf("Sorry!!! Element could not be found\n");
    else
    printf("Element found at index ");
    printf("%d",index);
    printf(", Position %d",index+1);
    return 0;
}
int Lsearch(int ar[],int size, int item)
{
    for(int i=0;i<size;i++)
    {
        if(ar[i]==item)
        return i;
    }
    return -1;
}