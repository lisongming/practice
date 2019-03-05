#include<bits/stdc++.h>
using namespace std;
//1000*5
int main()
{
    int i;
    double x, s;
    scanf("%lf",  &x);
    s  = 0.0;
    for(i = 1; i <= 5; i++)
        s = (s+1000) / (1 + 12 * x); 
 
 
    printf("%.2f\n", s);
    return 0;
}


