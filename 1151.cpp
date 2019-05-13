#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	double a,b,s=0;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%lf%lf",&a,&b);
		s=a+b;
		printf("%.0lf\n",s);
	}
	return 0;
}

