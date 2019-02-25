#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,c=0;
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(i%10!=4&&i/10%10!=4&&i/100%10!=4){
			c++;
		}
	}
	printf("%d\n",c);
	return 0;
}

