#include<bits/stdc++.h>
using namespace std;
char num[5];
 
int fun()
{
	static int k=0;
	if(k==0&&num[k]=='@') num[4]++;
	for(int i=4;i>=0;i--)
	{
		if(num[i]==10)
		{
			num[i]=0;
			if(num[i-1]=='@') num[i-1]=0;
			num[i-1]++;
		}
	}
	int t;
	for(;k<5;k++)
	{
		if(num[k]=='@') continue;
		t=k;
		if(k==4)
		{
		  k=0;
	    }
	    else
	    {
	    	k++;
	    }
		return num[t];
	}
	return -1;
}
 
 
int main()
{
    char s[300][300];
    //memset(s,' ',sizeof(s));
    for(int i=0;i<5;i++)
    {
    	num[i]='@';
    }
    num[4]=0;
    int N;
    cin>>N;//层数 
    int M=4*N-4;//数字个数  n + 2n-2 + n-2 
    
    for(int i=0;i<N;i++)
    {
    	int j=0;
    	for(;j<(N-1-i);j++)
    	{
    		s[i][j]='.';
    	}
    	s[i][j]=fun();
    }
    
    int k=N-1;
    for(int i=1;i<=2*N-2;i++)
    {
    	s[k][i]=fun();
    }
    
    for(int i=N-2,l=2;i>=1;i--,l++)
    {
    	int j,k;
    	for(j=l,k=1;k<=2*(i+1)-3;j++,k++)
    	{
    		s[i][j]='.';
    	}
    	s[i][j]=fun();
    }
    
    for(int i=0;i<N;i++)
    {
    	for(int j=0;j<N+i;j++)
    	{
    		if(s[i][j]=='.')
	    	{
	    		cout<<s[i][j];
	    	}
	    	else 
	    	{
	    		printf("%d",s[i][j]);
	    	}
    	}
    	cout<<endl;
    }
    
    /*
    for(int i=0;i<N;i++)
    {
    	for(int j=0;j<N-i;j++)
    	{
    		if(s[i][j]=='.')
    		{
    			cout<<s[i][j];
    		}
    		else 
    		{
    			printf("%d",s[i][j]);
    		}
    		
    	}
    	
    	if(i==N-1)
    	{
    		int k=N-1;
    		for(int l=1;l<=2*N-2;l++)
  		    {
    		   printf("%d",s[k][l]);
 		    }
    	}
    	cout<<endl;
    }
    */
	return 0;
}

