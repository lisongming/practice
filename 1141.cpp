#include<bits/stdc++.h>
using namespace std;
void convert(int n,char str[])
{
    int i,t=0,m;
    for(i=0;n!=0;i++)
    {
        str[i]=n%2;
        n=n/2;
        t++;
    }
    for(i=t-1;i>=0;i--)
    {
        if(str[i]!=0)
        {
            m=i;
            break;
        }
    }
    for(i=m;i>=0;i--)
    {
        printf("%d",str[i]); 
    }
}
int main()
{
    int n,t;
    char str[1000000];
    scanf("%d",&n);
    convert(n,str);
}

