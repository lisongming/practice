#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s;
	int c=0;
	while(s=getchar(),s!='\n'){
		if(s>=0&&s<=9)
		c++;
	}
	printf("%d\n",c);
	return 0;
}

