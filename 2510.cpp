#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,s=0;
	scanf("%d",&n);
	if(n<10){
		s=n*120;
	}
	else{
		s=n*120*0.8;
	}
	printf("%d",s); 
	return 0;
}

