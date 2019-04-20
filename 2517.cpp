#include<bits/stdc++.h>
using namespace std;

GetMinIndex(int a,int n,int minIndex)
{
            if(num[i]<minIndex){
                min=num[i];
                n=i;
            }
    return n;
}

int main()
{
    int a[100], n;
    int i, minIndex;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    GetMinIndex(a, n, &minIndex);
    printf("最小元素下标为%d\n", minIndex);
}
