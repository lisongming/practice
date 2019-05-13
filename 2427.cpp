#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b;
	char x;
	scanf("%d",&t);
    char str[30];
    char string[30];
    for(int i=1;i<=t;i++){
    	scanf("%d%d",&a,&b);
    	itoa(a,str,10);
    	itoa(b,string,10);
    	printf("%s",str);
    	printf("%s",string);
}
    return 0;
}

