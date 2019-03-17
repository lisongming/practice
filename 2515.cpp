#include<bits/stdc++.h>
using namespace std;

int sortt(int a[],int x)
{
	int temp;
	for(int i=0;i<=x;i++){
		for(int j=i+1;j<=x;j++){
			if(a[j]<a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main()
{
	int n,a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		sortt(n,a);
	}
	for(int i=0;i<=n;i++){
		printf("%d",a[i]);
	}
	return 0;
}

