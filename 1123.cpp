#include <stdio.h>
int main()
{
    int i,a[100]={0},max,f = 0;
    while(scanf("%d",&i) && i >= 0) a[i] ++;
    for(i = 1, max = a[0]; i < 100; i ++)
        if(max < a[i]) max = a[i];
    for(i = 0; i < 100; i ++)
    {
        if(a[i] == max)
        {
            if(f) printf(" %d", i);
            else printf("%d", i), f = 1;
        }
    }
}

