#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    double a,b,c,d,s,y;
    double x;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    s=100-(a*5)-(b*12)-(c*15);
    if(s<0) s=0;
    x=s*0.3;
	y=d*0.7;
    if(x+y>=60){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0;
}
