#include<bits/stdc++.h>
using namespace std;


void b(int n)
{
    int sum;
    if(n>1)
    {
        scanf("%d",&sum);
        b(n-1);
        printf("%d ",sum);
    }
    else
    {
        scanf("%d",&sum);
        printf("%d ",sum);
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    b(n);
}
