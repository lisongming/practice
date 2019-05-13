#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i=1,j=n;
	while(i<=m||j>=1){
		if(i<=m&&j>0){
		printf("%d ",i);
		printf("%d ",j);
		i++;
		j--;
		}
		else if(i>m&&j>0){
			printf("%d ",j);
			j--;
		}
		else if(i<=m&&j<=n){
			printf("%d ",i);
			i++;
		}
		else{
			break;
		}
	}
	return 0;
}

