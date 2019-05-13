#include<bits/stdc++.h>
using namespace std;

void sort(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
}
}
void add(int a[],int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
 
int main()
{
    int a[1001],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    add(a,n);
    return 0;
}
