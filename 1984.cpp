#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100
int maxm(int a, int b)
{
    return(a > b ? a: b);
}
int main()
{
    int n, a[MAX_N], t;
    for(t = 0; t < 3; t++)
        scanf("%d", &a[t]);
    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            for(int k = j + 1; k < n; k++)
            {
                int len = a[i] + a[j] + a[k];
                int maxx = maxm(a[i], maxm(a[j], a[k]));
                int rest = len - maxx;
                if(rest > maxx)
                    ans = maxm(ans, len);
            }
    printf("%d\n", ans);
    return 0;
}

