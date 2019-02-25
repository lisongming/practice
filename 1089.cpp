#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	double x=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		x=1.0*x*i;
		while(x>=10){
			x=x/10;
		}
	}
	printf("%.0lf\n",x);
	return 0;
}

