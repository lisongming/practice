#include<bits/stdc++.h>
using namespace std;

int change(int n)
{
	int a[20];
	int k=0;
	while(n!=0){
		k++;
		a[k]=n%10;
		n/10;
	}
	int s=0;
	for(int i=1;i<=k;i++){
		s*=10;
		s+=a[i];
	}
	return s;
	
}
int main()
{
	int n,i,cnt;
	int result[100];
	while(scanf("%d",&n)!=EOF){
		cnt=0;
		result[0]=n;
		while(n!=change(n)){
			n=n+change(n);
			result[++cnt]=n;
		}
		for(i=0;i<cnt;i++){
			printf("%d ",result[i]);
			printf("%d ",result[cnt]);
		}
	}
	return 0;
}

