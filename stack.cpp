
#include<iostream>
#include<process.h>
using namespace std;
const int size=6;
int push(int a[],int &top,int ele)
{
if(top==size-1)
{
return -1;
}
else
{
top++;
a[top]=ele;
}
return 0;
}
int pop(int a[],int &top)
{
int ret;
if(top==-1)
return -1;
else
{
ret=a[top];
top--;
}
return ret;
}
void display(int a[],int top)
{
int i;
if(top==-1)
return;
cout<<a[top]<<" ";
for(i=top-1;i>=0;i--)
cout<<a[i]<<" ";
}
int main()
{
int arr[size],item,top=-1,res;
char ch='y';
while(ch=='y'||ch=='Y')
{
cout<<"\nEnter item for insertion";
cin>>item;
res=push(arr,top,item);
if(res==-1)
{
cout<<"Overflow";
break;
}
cout<<"The stack is:";
display(arr,top);

cout<<"Want to insert more(y/n)";
cin>>ch;
}
cout<<"Deletion of elements:";
ch='y';
while(ch=='y'||ch=='Y')
{
res=pop(arr,top);
if(res==-1)
{
cout<<"Underflow";
break;
}

else
{
cout<<"Element deleted is:"<<res;

cout<<"\nThe stack now is:\n";
display(arr,top);
}
cout<<"\nWant to delete more elements(y/n)";
cin>>ch;
}
return 0;
}
