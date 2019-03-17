#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a=0,b=0,c=0;
	scanf("%d",&t);
	a=t/3600;
	b=t/60%60;
	c=t%60;
	printf("%d %d %d",a,b,c);
	return 0;
}

