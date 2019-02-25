#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int q=1;
    for(int i=1;i<=n;i++)
        q*=i;   
    return q;
}
	int main()
{
    int m,k;
    scanf("%d%d",&m,&k);
    printf("%d",fact(m)/(fact(k)*fact(m-k)));
}


