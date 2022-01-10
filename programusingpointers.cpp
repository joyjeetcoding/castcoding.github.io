#include<iostream>
#include<stdlib.h>
using namespace std;

int *rollno;                //declare an int pointer for rollno array
float *marks;               //declare a float pointer for marks array 

int main()
{
    system(" cls ");
    int size;
    cout<<"How many elemnts are there in the array ?"<<endl;
    cin>>size;
    rollno=new int[size];                   //dynamically allocate rollno array
    marks=new float[size];                  //dynamically allocate marks array

    // check whether the memory is available or not

    if((!rollno)||(!marks))                 //if rollno and marks is a null pointer
    {
        cout<<"Out of memory ! Aborting"<<endl;
        return 1;
    }
    // Read values in the array elements
    for(int i=0;i<size;i++)
    {
        cout<<"Enter roll no. and marks for student"<<i+1<<endl;
        cin>>rollno[i]>>marks[i];
    }
    // display the array contents
    cout<<"\tRoll no \tMarks"<<endl;
    for(int i=0;i<size;i++)
    cout<<"\t"<<rollno[i]<<"\t\t"<<marks[i]<<endl;
    delete[]rollno;                             //Deallocating rollno array
    delete[]marks;                              //Deallocating marks array
    return 0;
}