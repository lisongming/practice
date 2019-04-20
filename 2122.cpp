#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,a,b,c,x;
	double s=0;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		x=0;
		scanf("%d%d%d",&a,&b,&c);
		s=a*b;
		x=a/10;
		s+=x/3*c;
		printf("%.0lf\n",s);
	}
	return 0;
}

