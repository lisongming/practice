#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[110];
	a[1]=1;
	a[2]=2;
	a[3]=3;
	int n,i;
	while(scanf("%d",&n),n!=0){
		for(i=4;i<=55;i++){
			a[i]=a[i-3]+a[i-1];
		}
		printf("%d\n",a[n]);
	}
	return 0;
}
