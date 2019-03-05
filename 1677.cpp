#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s;
	scanf("%c",&s);
	if(s=='A'){
		printf("Accepted");
	}
	else if(s=='P'){
		printf("Presentation Error");
	}
	else if(s=='W'){
		printf("Wrong Answer");
	}
	else if(s=='R'){
		printf("Runtime Error");
	}
	else if(s=='T'){
		printf("Time Limit Exceeded");
	}
	else if(s=='M'){
		printf("Memory Limit Exceeded");
	}
	else if(s=='O'){
		printf("Output Limit Exceeded");
	}
	else if(s=='C'){
		printf("Compilation Error");
	}
	return 0;
}

