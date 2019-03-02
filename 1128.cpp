
#include <stdio.h>
int main()
{
    double a[1001][10];
    int i,f,n,j,m,a2;
    double s,a1;
    scanf("%d%d",&m,&n);
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            scanf("%lf",&a[i][j]);
    for(j=0; j<n; j++)
    {
        a1=0.0;
        for(i=0; i<m; i++)
        {
            a1+=a[i][j];
        }
        s=1.0*a1/m;
        if(j==0)
            printf("%.2f",s);
        else
            printf(" %.2f",s);
    }
    return 0;
}

