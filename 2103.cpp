#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<5&&b<5&&c<5){
		printf("easy");
	}
	else if(a>5&&b>5&&c>5){
		printf("difficult");
	}
	else{
		printf("exact");
	}
	return 0;
}

