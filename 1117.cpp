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
		printf("%4d ",a[i]);
	}
}

int find(int a[],int n,int x)
{
	int i,t;
	for(i=0;i<n-1;i++){
		if(a[i]==x){
			t=i;
			break;
		}
		else
		t=-1;
	}
	return t;
}

int main()
{
	int n,i,a[10],j,x;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
	scanf("%d",&x);
	i=find(a,n,x);
	if(i>-1){
	   del(a,n,i);
	}
	add(a,n);
	return 0;
}
