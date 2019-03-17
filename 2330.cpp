#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,c,d,s;
    double x;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    s=100-(a*5)-(b*12)-(c*15);
    x=s*0.3+d*0.7;
    if(x<60){
        printf("Fail");
    }
    else{
        printf("Pass");
    }
    return 0;
}
