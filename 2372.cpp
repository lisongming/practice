#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,a,b,c,s;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&k,&a,&b);
		c=a-b;
		s=k/c;
		printf("%d\n",s+1);
	} 
	return 0;
}

