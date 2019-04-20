#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,n,m;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		scanf("%d%d",&n,&m);
		for(int j=1;j<n;j++){
			m=m+2;
		}
		printf("%d",m);
	}
	return 0;
}

