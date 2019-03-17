#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,s=0;
	printf("请输入你的体重（KG）和身高（M），用空格隔开：") ;
	scanf("%lf %lf",&a,&b);
	s=a/(b*b);
	printf("亲，你的身体指数是：%lf",s);
	if(s<18.5){
		printf("偏瘦");
	}
	else if(s>=18.5&&s<24){
		printf("正常"); 
	}
	else if(s>=24&&s<28){
		printf("偏胖"); 
	}
	else if(s>=28&&s<30){
		printf("肥胖");
	}
	else if(s>=30){
		printf("重度肥胖");
	}
	return 0;
}

