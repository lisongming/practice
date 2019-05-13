#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,s,a=0,min=9999;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&s); 
			a+=s;
			if(a<min){
				min=a;
			}
	}
	printf("%d",-min);
	return 0;
}

