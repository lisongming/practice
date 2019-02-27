#include<bits/stdc++.h>
using namespace std;

int insert(int a[],int n,int num)
{
	int i,t,k;
	for(i=n-1;i>=0;i--){
		if(a[i]>num){
			a[i+1]=a[i];
		}
		else
		break;
	}
	a[i+1]=num;
	n++;
	return n;
}
void add(int a[],int n)
{
	int i;
	for(i=0;i<n;i++){
		if(i==0)
		printf("%d",a[i]);
		else
		printf(" %d",a[i]);
	}
}

int main()
{
	int n,a[1001],num,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&num);
	insert(a,n,num);
	add(a,n+1);
	return 0;
}

