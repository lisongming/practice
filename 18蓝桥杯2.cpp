
#include <iostream>
using namespace std;
 
int main()
{
	
	for(int i=6;;i=i+5)
	{
		int t=i;
		if(t%5==1)
		{
			t=(t-1)/5*4;
			if(t%5==2&&t!=0)
			{
				t=(t-2)/5*4;
				if(t%5==3&&t!=0)
				{
					t=(t-3)/5*4;
					if(t%5==4&&t!=0)
					{
						t=(t-4)/5*4;
						if(t%5==0&&t!=0)
						{
							cout<<i<<endl;
							break;
						}	
					}	
				}
			}
			
			
		}
		
	}
	return 0;
}


