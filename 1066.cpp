#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s;
	int a=0,b=0,c=0;
	while(s=getchar(),s!='\n'){
		if(isalpha(s)){
			a++;
		}
		else if(isdigit(s)){
			b++;
		}
		else{
			c++;
		}
	}
	printf("letter:%d\ndigit:%d\nother:%d\n",a,b,c);
	return 0;
}
