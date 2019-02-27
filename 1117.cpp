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
	for(i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}

int find(int a[],int n,int x)
{
	int i,t=-1;
	for(i=0;i<n;i++){
		if(a[i]==x){
			t=i;
			break;
		}
	}
	if(t==-1)return -1;
	else return t;
}

int main()
{
	int n,i,a[10],j,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	j=find(a,n,x);
	if(j==-1){
	   printf("Not Found");
	}
	else
    {
    	del(a,n,j);add(a,n-1);
	}
	return 0;
}
