#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,x,y,a[10100],s=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		 scanf("%d",&a[i]);
	}
	for(int j=0;j<m;j++){
		 	scanf("%d%d",&x,&y);
			 s=a[x-1];
			 a[x-1]=a[y-1];
			 a[y-1]=s;
		 }
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

