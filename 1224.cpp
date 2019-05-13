#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j,n,m;
	while(~scanf("%d",&t))
	{
		while(t--)
		{
			scanf("%d%d",&n,&m);
			for(j=1;j<=n;j++)
			{
				for(i=1;i<=m;i++)
					printf("+--");
				printf("+\n");
				for(i=1;i<=m;i++)
					printf("|  ");
				printf("|\n");
				for(i=1;i<=m;i++)
					printf("|  ");
				printf("|\n");
			}
			for(i=1;i<=m;i++)
				printf("+--");
			printf("+\n");
		}
	}
	return 0;
}

