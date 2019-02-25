#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;n>1;i++){
		while(n%i==0){
			printf("%d",i);
			n=n/i;
			if(n==i){
				printf("\n");
			}
			else
			    printf(" ");
		}
	 
	} 
	return 0;
}

