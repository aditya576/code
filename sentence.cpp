#include <iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char sent[]="We are going to kapu beach.";
    int len=strlen(sent);
    char str[len];
    char str3[80];
    cout<<"string:";
    gets(str);
    int i,flag,len2,j;
    len2=strlen(str);
        for(i=0;sent[i]!='\0';i++)
        {
        flag=0;
         for(j=i;j<len2+i;j++)
        {
            str3[j]=sent[j];
        }
        if(strcmp(str3,str)==0)
            {
                flag=1;
                break;
            }
            else
                continue;
        }
        if(flag==1)
            cout<<"String found";
        else
            cout<<"String not found";
}
