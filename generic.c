#include<stdio.h>
void main()
{
int x,y,j,sum=0,i;
printf("Enter x:");
scanf("%d",&x);
for(i=1;sum<10;i++)
{
for(j=1;j<=i;j++)
{y=x%10;
sum+=y;
x=x/10;
}
if(sum<10)
break;
else
x=sum;
continue;
}
printf("sum=%d",sum);



}
