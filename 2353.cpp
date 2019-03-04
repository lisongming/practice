#include<bits/stdc++.h>
using namespace std;

bool u[10];
int b[10];
void perm(int a[],int s,int c)
{
	if(s>=3&&b[0]!=0){
		for(int i=0;i<s;i++){
			printf("%d",b[i]);
		}
		printf("\n");
		
		return;
	}
	for(int i =0;i< c;i++){
		if(!u[i]){
			u[i]=true;
			b[s]=a[i];
			perm(a,s+1,c);
			u[i]=false;
		}
	}
}


int main()
{
	int n,arr[10];
	while(scanf("%d",&n),n!=0){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
			}
	memset(u,0,sizeof(u));
	perm(arr,0,n);
}
}


