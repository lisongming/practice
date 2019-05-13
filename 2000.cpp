#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double x=1;
	scanf("%d",&n);
	for(int i=1;i<n+1;i++){
		x*=i;
	} 
	printf("%.0lf",x);
	return 0;
}

