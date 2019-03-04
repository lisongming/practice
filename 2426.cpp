#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
}
	return 0;
}

