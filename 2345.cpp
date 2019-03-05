#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[200],b[200],i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	for(k=0;k<n;k++){
		if(a[k]==b[k]){
			printf("%d ",k+1);
		}
	}
	return 0;
}

