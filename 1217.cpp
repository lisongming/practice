#include<bits/stdc++.h>
using namespace std;

int main()
{
	int s,x=0;
	while(scanf("%d",&s),s!=0){
		for(int i=1;i<=32;i++){
			if(s==i*i*i){
				x++;
			}
		}
	}
	printf("%d",x);
	return 0;
}

