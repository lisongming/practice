#include<bits/stdc++.h>
using namespace std;

int bToD(char str[])
{
    int i;
    int sum=0;
    for(i=0;str[i]!='\0';i++)
    {
        sum=sum*2+(str[i]-'0');
    }
    return sum;
 
}
int main()
{
 
   char str[35];
   int a[3];
   int i,j;
   int temp;
   for(i=0;i<3;i++)
   {
       scanf("%s",str);
       a[i]=bToD(str);
   }
 
 
   for(i=0;i<2;i++)
    for(j=i+1;j<3;j++)
    {
        if(a[i]>a[j])
        {
            temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        }
 
    }
 
 
    for(i=0;i<3;i++)
    {
        if(i==0)
           printf("%d",a[i]);
        else
           printf(" %d",a[i]);
    }
    return 0;
 
}


