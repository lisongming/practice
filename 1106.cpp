#include<bits/stdc++.h>
using namespace std;

int add(int n)
{
	int i=0,j=0,b[10],sum=0,c,x;
    while(n>0)
    {
        x=n%10;
        i++;++j;
        b[i]=x;
        n=n/10;
    }
    j-=1;
    for(int k=1;k<=i;k++,j--)
    {
    c=b[k]*pow(10,j);
    sum+=c;
    }
    return sum;
}

int main()
{
    int n,m,a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
    m=add(i);
    if(m==i)
    printf("%d ",i);    
    }
}
