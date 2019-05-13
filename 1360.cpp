#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,m,s=0;
	while(scanf("%d %d %d",&a,&b,&m)!=EOF){
		printf("%d\n",(a+b)%m);
	}
	return 0;
}

