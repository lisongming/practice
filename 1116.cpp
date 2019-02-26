#include<bits/stdc++.h>
using namespace std;
void del(int a[],int n,int i)
{
	int j;
	for(j=i;j<n-1;j++){
		a[j]=a[j+1];
	}
}
void add(int a[],int n)
{
	int i;
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
}
int main()
{
	int n,i,a[10],j;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
	scanf("%d",&i);
	del(a,n,i);
	add(a,n);
	return 0;
}

