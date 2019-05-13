#include<bits/stdc++.h>
using namespace std;

void LargestTow(int a[],int n,int *pfirst,int *psecond)
{
	int i,j,t;
	for(j=1;j<n;j++)
		for(i=0;i<n-j;i++)
		if(a[i]<a[i+1])
		{
			t=*(&a[i]);
			 *(&a[i])=*(&a[i+1]);
			*(&a[i+1])=t;
		 }
	 pfirst=a;
	 psecond=&a[1];
	 printf("%d %d",*pfirst,*psecond);
}
int main()
{
	int a[1000],i,n,*p1,*p2;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
		 scanf("%d",&a[i]);
	LargestTow(a,n,p1,p2);
}

