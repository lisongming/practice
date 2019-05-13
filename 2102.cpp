#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,s=0,a=0;
	scanf("%d%d",&n,&k);
	s=n/k;
	a=n%k;
	if(a!=0){
		s=s+1;
	}
	printf("%d",s);
	return 0;
}

