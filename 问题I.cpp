#include<bits/stdc++.h>
using namespace std;

long long a[1000000];
int main(void)
{
	int i,k,s;
	a[1]=1;
	a[2]=1;
	for(i=3;i<=1000000;i++){
		s=a[i-2]*a[i-2];
		a[i]=(s+a[i-1]*(i-1))%i;
	}
	scanf("%d",&k);
	if(k>2){
	printf("%lld",a[k]);}
	else if(k>0&&k<3){
		printf("1");
	}
	return 0;
}

