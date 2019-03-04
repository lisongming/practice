#include<stdio.h>
int	MinIndex(int a[],int n);
int	MaxIndex(int a[],int n);
void PrintArr(int a[],int n);
int main(){
  int a[10],i,j,n;
  int max_flag,min_flag;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   	scanf("%d",&a[i]);
   }
    min_flag= MinIndex(a,n);
  j=a[0];
  a[0]=a[min_flag];
  a[min_flag]=j;
   max_flag= MaxIndex(a,n);
  j=a[max_flag];
  a[max_flag]=a[n-1];
  a[n-1]=j;
  PrintArr(a,n);
  return 0;
}
int MinIndex(int a[],int n){
  	int i ,min=a[0],flag;
	  for(i=0;i<n;i++){
	  	if(min>a[i]){
	  		min=a[i];
	  		flag=i;
	  	}
	  }
	  return flag;
}
int MaxIndex(int a[],int n){
  	int i ,max=a[0],flag;
	  for(i=0;i<n;i++){
	  	if(max<a[i]){
	  		max=a[i];
	  		flag=i;
	  	}
	  }
	  return flag;
}
void PrintArr(int a[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-1]);
	return;
}

