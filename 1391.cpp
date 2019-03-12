#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,n,k;
    scanf("%d",&T);
    while(T--) {
        scanf("%d %d",&n,&k);
        for(int i=0; i<n; i++) {
            k=(k+1)+(k+1);
            k=(k-1)+(k-1);
        }
        printf("%d\n",k);
    } 
	return 0;
}

