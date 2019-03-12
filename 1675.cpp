#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m,x,d;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int d=0;
		scanf("%d%d",&n,&m);
		
	for(int j=1;j<=n;j++){
		scanf("%d",&x);
		if(x%m==0){
			d+=x;
		}
	}
	printf("%d",d);
	}
	return 0;
}

