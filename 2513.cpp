#include<bits/stdc++.h>
using namespace std;

int isPrime(int x)
{
	if(x==1){
		return 0;
	}
	for(int i=2;i<=x;i++){
		if(x%i==0)
		return 0;
	}
	return 1;
	
}

int main()
{
	int n,s=0,c,x;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x); 
		c=isPrime(x);
		if(c==1){
			s++;
		}
	}
	printf("%d",s);
	return 0;
}

