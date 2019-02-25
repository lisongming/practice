#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,k;
	double s=0.0;
	scanf("%d",&k);
	for(i=1;i>0;i++){
		s+=1.0/i;
		if(s>k){
			break;
		}
	}
	printf("%d",i);
	return 0;
}

