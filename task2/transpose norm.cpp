include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a[100][100],b[100][100],m,n,p,k,q,i,j,c[100][100],temp;
float norm1,norm2,sum=0;
cout<<"Enter rows and columns of matrix1";
    cin>>m>>n;
    cout<<"Elements of the first matrix:";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
    }
    cout<<"Enter rows and columns of matrix2:";
    cin>>p>>q;
    cout<<"Elements of second matrix:";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }
    if(n!=p)
        cout<<"Multiplication not possible:";
        else
        {
    for(i=0;i<m;i++)
    {  c[i][j]=0;
        for(j=0;j<q;j++)
        {
            for(k=0;k<m;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
    }}
    cout<<"Transpose of matrix 1:";

    for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
    {
    cout<<a[j][i]<<" ";
    }
    cout<<"\n";
    }
    cout<<"Norm of matrix 1:";
    for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
    {
        sum+=a[i][j];
    }
    }
    norm1=sqrt(sum);
    sum=0;
    cout<<norm1<<"\n";

    cout<<"Transpose of matrix 2:";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {cout<<b[j][i]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Norm of matrix2:";
    sum=0;
        for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        { sum+=b[i][j];
        }
    }
    norm2=sqrt(sum);
    cout<<norm2<<"\n";

    cout<<"After multiplication";
    for(i=0;i<m;i++)
    {
    for(j=0;j<q;j++)
    {
        cout<<c[i][j]<<" ";
    }
    cout<<"\n";
    }
    return 0;
    }
