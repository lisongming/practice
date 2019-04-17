#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
           int a,b,c;
           int a1,b1,c1;
           scanf("%d%d%d",&a,&b,&c);
           c1=c/4;
           b1=b;
           a1=a/2;
           printf("%d\n",a1+b1-c1);
    }
    return 0;
}

