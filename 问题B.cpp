#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int a=0,b=0,c=0;
	scanf("%d",&n);
	a=n/10;
	b=n-(a*10);
	b=b/5;
	c=n-(b*5)-(a*10);
	printf("%d %d %d",a,b,c);
	return 0;
}

