#include <iostream>

using namespace std;
char copy(char a[],char b[],int index=0)
{

    b[index]=a[index];

    if(a[index]=='\0')
    return -1;
        else
        return copy(a,b,index+1);
}
int main()
{
    char a1[]="I am the best";

    char b1[]=" ";

    copy(a1,b1);
    cout<<b1;
    return 0;
}
