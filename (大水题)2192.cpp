#include<bits/stdc++.h>
using namespace std;
 
void sort(int a[],int n)
{
    int i,j,t;
    for(i=0;i<4-1;i++)
    {
        for(j=i+1;j<4;j++)
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
    for(i=0;i<4;i++){
        printf("%d ",a[i]);
    }
}
 
int main()
{
    int a[10],n,i;
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    sort(a,4);
    add(a,4);
    return 0;
}

