#include<bits/stdc++.h>
using namespace std;

int main()
{
	int d;
	char a;
	d = 0; 
    while( a =  getchar(), a != '\n'){
    	d  = d * 2 + (a - '0');
	}
    printf("%d",d);
	return 0;
}

