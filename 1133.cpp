#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000];
    int i=0,count=0;
    gets(str);
    if(str[0]!=' ') count=1;
    for(i=1; str[i]!='\0'; i++)
    {
        if(str[i-1]==' '&& str[i]!=' ')
            count++;
    }
    printf("%d\n",count);
    return 0;
}


