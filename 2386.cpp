#include<bits/stdc++.h>
using namespace std;

int arr[100];
int res;

void dfs(int t,int s,int n,int r)
{
	if(s>=n){
		if(t>=r){
			res=min(res,t);
		}
		return;
	}	
	dfs(t,s+1,n,r);
	dfs(t+arr[s],s+1,n,r);
}

int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF){
		res=INT_MAX;
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		dfs(0,0,n,m);
		printf("%d\n",res ==INT_MAX?-1:res);
	}
	return 0;
}


