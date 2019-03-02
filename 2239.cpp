#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,a,n,s,d;
	scanf("%d",&n);
	a=n*6;
	s=0;
	d=1;
	for(i=10;i<a;i++){		
		d=d*2;
		s+=d;
	}
	printf("%d",s);
	return 0;
}

