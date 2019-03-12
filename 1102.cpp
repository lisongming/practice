#include<bits/stdc++.h>
using namespace std;

double CancelFee(double price)
{
    double x=price*0.05;
    float y=(int)x;
    if(x-0.25<y)
    y+=0;
    else if(x-0.25>=y&&x-0.25<y+0.5)
    y+=0.5;
    else y+=1;
    printf("%.1f",y);
}
int main()
{
    double x;
    scanf("%lf",&x);
    CancelFee(x);
}


