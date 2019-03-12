#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,a[100000],n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		int t=0;
		for(int k=0;k<n;k++){
			if(a[i]==a[k]){
				t++;
			if(t>1){
				for(int l=k;l<n;l++){
					a[l]=a[l+1];
				}
				n--;
			}
		}
		
	}
	}
	sort(a,a+n);
	printf("%d\n",n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

