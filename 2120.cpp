#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,num,s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&num);
		s=num%10;
		for(int j=1;j<=s;j++){
			printf("I am a good ACMer");
			printf("\n");
		}
	}
	return 0;
}

