#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n,a[1001],b[1001],i,j,min;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	min=fabs(a[0]-b[0]) ;
        for(i=0;i<m;)
            for(j=0;j<n;)
        {
            if(fabs(a[i]-b[j+1])<min&&j+1<m)
            {
                min = fabs(a[i]-b[j+1]);
                j++;
            }
            else if(fabs(a[i+1]-b[j])<min&&i+1<n)
            {
                min = fabs(a[i+1]-b[j]);
                i++;
            }
            else
            {
                i++;
                j++;
                if(fabs(a[i]-b[j])<min)
                    min=fabs(a[i]-b[j]);
            }
            if(i==m-1||j==n-1)
                break;
        }
        printf("%d",min);
		return 0;
}

