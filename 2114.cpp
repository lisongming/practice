#include<bits/stdc++.h>
using namespace std;
 
#define MAXN
#define MAXM
#define INF 0x3f3f3f3f
#define LL long long
 
double a,b,c,d;
 
double f(double x)
{
	return a*x*x*x+b*x*x+c*x+d;
}
 
double dfs(double l,double r)
{
	if(r-l<=0.001)return l;
	
	double mid=(l+r)/2;
	if(f(l)*f(mid)<=0)return dfs(l,mid);
	else return dfs(mid,r);
}
 
int main()
{
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	
	double ans[5];int cnt=0;
	for(int i=-100;i<100;++i)
	{
		double l=i,r=i+1;
		if(f(l)==0)
			ans[++cnt]=l;
		else if(f(l)*f(r)<0)
			ans[++cnt]=dfs(l,r);
		
		if(cnt>=3)break;
	}
	
	printf("%0.2lf %0.2lf %0.2lf\n",ans[1],ans[2],ans[3]);
}


