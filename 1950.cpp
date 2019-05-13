#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,x;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		scanf("%d",&x);
		if(x%7==0&&x%5!=0){
			printf("Yes\n");
		}
		else{
		printf("No\n"); 
	}
}
	return 0;
}

