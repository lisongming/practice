#include<bits/stdc++.h>
using namespace std;
void fun (char str[], int min, int max, int len, int x); 
int main()
{

	 int min, max, len;
	 char str[26] = {0};
	 int i;
	 scanf("%d %d %d", &min, &max, &len);
	 scanf("%s", str);
	 for (i=0; i<5; i++)	
	 {
		 fun(str, min, max, len, 1);
		 printf("%s\n", str);
	 }
	 return 0;
}
void fun (char str[], int min, int max, int len, int x)
{
	 int i;
	 if (str[len-x] == 96+max-x+1)
	 {
		 if (x == len)
			 return;
		 else
		 {
		 x += 1;
		 fun(str, min, max, len, x);
		}
	 }
	 else
	{
		 str[len-x] += 1;
		 for (i=x-1; i>=1; i--)
		 {
			 str[len-i] = str[len-i-1] + 1;
		 }
	 }
}

