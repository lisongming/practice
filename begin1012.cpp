#include<bits/stdc++.h>
using namespace std;

int main()
{
	double x,a,b,c,d,s;
	scanf("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d);
	s=a*x*x*x+b*x*x+c*x+d;
	printf("%.7lf",s);
	return 0;
}

