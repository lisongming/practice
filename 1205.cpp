#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        int a[105] = {0};

        scanf("%d",&n);

        for(int i = 0;i < n;i++)
            scanf("%d",&a[i]);

        sort(a,a+n);

        int sum = 0;

        for(int i = 0;i < n;i++)
            sum += a[i];


        if(sum % 2 != 0)
            printf("%d\n",sum);

        else
        {
            for(int i = 0;i < n;i++)
            {
                if(a[i] %2 != 0)
                {
                    sum -= a[i];
                    break;
                }
                else
                    continue;
            }

            if(sum % 2 == 0)
               printf("0\n");
            else
               printf("%d\n",sum);
        }
    }
    return 0;
}


