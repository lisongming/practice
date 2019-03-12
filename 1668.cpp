#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,c=0;
	int s;
	scanf("%d",&T);
	for(int i=1;i<T;i++){
		scanf("%d",&s);
		if(s=='0'&&s=='9'&&s=='6'){
			c=c+1;
		}
		else if(s=='8'){
			c=c+2;
		}
		printf("%d",c);
	}
	return 0;
}

