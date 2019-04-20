#include<bits/stdc++.h>
using namespace std;

int main()
{
 int i,n,c,max=0,j,number;
 int a[101];
 scanf("%d",&n);
 for(i=0;i<n;i++){
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++){    
	number=1;
   for(j=0;j<n;j++){
      if(a[j]==a[i]){
	  number++;
	  }
     if(max<number){
       max=number;
       c=a[i];
	   }
	}
 	}
	printf("%d\n",c);
 return 0;
}
