#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n,s;
	double x;
	scanf("%d%d",&m,&n);
	s=200-m;
	x=s/n;
	if(s%n!=0){
		x=x+1;
	}
	printf("%.0lf",x);
	return 0;
}

