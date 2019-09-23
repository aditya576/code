#include <iostream>
using namespace std;
int main()
{
    int a[50],n,i,j;
    cout<<"Size:";
    cin>>n;
    cout<<"Elements:";
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        if(a[i+1]>a[i])
        {
            for(j=i+1;j<=n;j++)
            {
                a[j-1]=a[j];
            }
            n=n-1;
        }
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
