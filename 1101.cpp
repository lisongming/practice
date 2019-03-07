#include<bits/stdc++.h>
using namespace std;

int inverse(int n)
{
	int s=0;
    while(n>0)
    {
        s=s*10+n%10;
        n=n/10;
    }
    return s;
}

int main()
{
	int n,m,i;
	scanf("%d",&n);
	m=inverse(n);
	i=m+n;
	printf("%d",i);
	return 0;
}

