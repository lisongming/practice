#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,s=0;
	printf("������������أ�KG������ߣ�M�����ÿո������") ;
	scanf("%lf %lf",&a,&b);
	s=a/(b*b);
	printf("�ף��������ָ���ǣ�%lf",s);
	if(s<18.5){
		printf("ƫ��");
	}
	else if(s>=18.5&&s<24){
		printf("����"); 
	}
	else if(s>=24&&s<28){
		printf("ƫ��"); 
	}
	else if(s>=28&&s<30){
		printf("����");
	}
	else if(s>=30){
		printf("�ضȷ���");
	}
	return 0;
}

