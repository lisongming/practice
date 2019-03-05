#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159

int main()
{
	double a,b,x,y;
	scanf("%lf %lf",&a,&b);
	x=(a/2)*(a/2)*PI;y=(b/2)*(b/2)*PI;
	if(x>2*y){
		printf("NO");
	}
	else{
		printf("OK");
	}
	return 0;
}

