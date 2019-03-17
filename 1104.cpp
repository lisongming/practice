#include<bits/stdc++.h>
using namespace std;

int FacSum(int n)
{
    int m,sum=0;
    for(int i=1;i<n;i++)
    if(n%i==0)
    sum+=i;
    printf("%d",sum);
} 
int main()
{
    int n;
    scanf("%d",&n);
    FacSum(n); 
}

