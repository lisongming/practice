#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=0,k,N,s=0;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		scanf("%d",&k);
		if(k>=a){
			s+=(k-a)*6;
		}
		else if(k<a){
			s+=(a-k)*4;
		}
		s+=5;
		a=k;
	}
	printf("%d",s);
	return 0;
}

