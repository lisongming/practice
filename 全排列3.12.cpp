#include<bits/stdc++.h>
using namespace std;

const int N=10;
bool used[N];
int result[N];

void perm(int a[],int step,int target)
{
	if(step>=target){
		for(int i=0;i<step;i++){
			printf("%d ",result[i]);
		}
		printf("\n");
		return;
	}
	for(int i=0;i<N;i++){
		if(!used[i]){
			used[i]=true;
			result[step]=a[i];
			perm(a,step+1,target);
			used[i]=false;
		}
	}
}
int main()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	memset(used,0,sizeof(used));
	perm(arr,0,2);
	return 0;
}

