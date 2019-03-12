#include<bits/stdc++.h>
using namespace std;

int add(int x,int y)
{
	if(x==y){
		return x;
	}
	if(x>y){
		return add(x/2,y);
	}
	return add(x,y/2);
}



int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",add(m,n));
	return 0;
}

