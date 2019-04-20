#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double a,b,s,x;
	scanf("%d",&n);
	a=n/10;
	b=n%10;
	s=b*10+a;
	x=sqrt(s);
	printf("%.2lf",x);
	return 0;
}

