#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&b>c||a>c&&c>b){
		printf("%d",a);
	}
	else if(b>c&&c>a||b>a&&a>c){
		printf("%d",b);
	}
	else if(c>b&&b>a||c>a&&a>b){
		printf("%d",c);
	}
	return 0;
}

