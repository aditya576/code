#include <iostream>

using namespace std;
int recur(int x)
{
    if(x==0)
        return 0;
    return(x%10+recur(x/10));
}


int main()
{
    int n,b,a;
    cout<<"number:";
    cin>>n;
    int y=recur(n);
    cout<<y;
    cout<<"\nNUmber2:";
    cin>>b;
    int sum=0;
    while(b>0)
    {
        a=b%10;
        sum+=a;
        b/=10;
    }
    cout<<sum;
}
