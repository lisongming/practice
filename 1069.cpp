#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,m,k;
	a=0;
	scanf("%d%d",&m,&k);
	while(m>0){
		m=m-1;
		a=a+1;
		if(a%k==0){
		m=m+1;
	}
	}
	printf("%d",a);
	return 0;
}

