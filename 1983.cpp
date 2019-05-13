#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
	 if(a==b || a==c || b==c){
	printf("Yes");
	} 
	else{
		printf("No");
	}
}
else{
	printf("No");
}
	return 0;
}

