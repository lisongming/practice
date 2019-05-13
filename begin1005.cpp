#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,a,y,b;
    double m;

    scanf("%lf%lf%lf%lf",&x,&a,&y,&b);
    m=(b*y-a*x)/(b-a);
    printf("%0.2f",m);
    return 0;
}

