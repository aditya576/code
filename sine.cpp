#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float i,n,x,j,mins=-1,fact,term,sum=0;
    cout<<"Enter x and n:";
    cin>>x>>n;
    x=x*3.14/180;

    for(i=1;i<=n;i+=2)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact*=j;
        }
        mins*=-1;
        term=mins*pow(x,i)/fact;
        sum+=term;
    }
    cout<<"sin "<<x<<"="<<sum;


return 0;
}
