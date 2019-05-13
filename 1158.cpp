#include<bits/stdc++.h>
using namespace std;
void  swap(int  *pa, int  *pb );
int  main ()
{
     int  a,b,c,d;
     scanf("%d%d%d%d",&a,&b,&c,&d);
     if (b>a)   
     {
        swap(&a,&b);   
     }
     if (c>a)
     {
         swap(&a,&c);
     }
     if (d>a)
     {
         swap(&a,&d);
     }
     if (c>b)
     {
          swap(&b,&c);
     }
     if (d>b)
     {
          swap(&b,&d);
     }
     if (d>c)
     {
          swap(&c,&d);
     }
     printf("%d %d %d %d\n",a,b,c,d);
return 0;
}
  
void  swap ( int *pa ,int  *pb )
{
      int  t;
      t=*pa;
      *pa=*pb;
      *pb=t;
}
