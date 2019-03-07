#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a;
	scanf("%d\n",&n);
	char s;
	for(int i=1;i<=n;i++){
		a=0;
		while(s=getchar(),s!='\n'){
        if(s>='0'&&s<='9'){
            a++;
        }   
    }
    printf("%d\n",a);
	}
    
	return 0;
}

