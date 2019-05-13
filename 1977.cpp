#include<stdio.h>
int main()
{
	int i,T,x,a,b;
	int s=0;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%d%d",&a,&b);
		x=a/b+1;
		s=a-b*(a/b);
		printf("%d %d\n",x,s);
	}
	return 0;
}

