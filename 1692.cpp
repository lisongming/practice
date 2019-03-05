#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double a,x,b=0.0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lf",&a);
		if(a>=60){
			b=b+1;
		}
	}
	x=b/n;
	printf("%.2lf",x);
	return 0;
}

