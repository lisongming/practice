#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,mun,m,index;
	int max=-1;
	int a[50002]={0};
	scanf("%d",&n);
	m=n;
	while(n--){
		scanf("%d",&mun);
		a[mun]++;
	}
	while(m--){
		if(max<=a[m]){
			max=a[m];
			index =m;
		}
	}
	printf("%d\n%d\n",index,a[index]);
	return 0;
}

