#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,s,x=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		s=i*(i+1);
		x+=s;
	}
	printf("%d",x);
	return 0;
}

