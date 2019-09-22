#include<iostream>
using namespace std;
int main()
{
    float i,n,x,term,sum=0;
    cout<<"Enter x and n:";
    cin>>x>>n;
    x=x*3.14/180;
    term=x;
    sum=x;
    for(i=1;i<=n;i++)
    {
        term=term*(-1)*(2*i-1)*x*x/(2*i+1);
        sum+=term;
    }
    cout<<"sin "<<x<<"="<<sum;


return 0;
}
