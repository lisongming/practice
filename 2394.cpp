#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,s=0;
	int d;
	scanf("%d%d",&a,&b);
	for(int i=1;i<100000000;i++){
		d=a*b*i;
		if(d%2!=0){
			s++;
		}
		else
		s=0;
	}
	if(s==0){
		printf("No");
	}
	else
	printf("Yes");
	return 0;
}

