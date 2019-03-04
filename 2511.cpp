#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,s=0,x;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		x=i*(i+1);
		s+=x;
	}
	printf("%d",s);
	return 0;
}

