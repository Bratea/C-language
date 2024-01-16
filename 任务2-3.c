#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,a;
	printf("请输入你要求的X值：");
	scanf("%f",&x);
	a=exp(x);
	y=sqrt(x*x+a)+1;
	printf("结果是:%6.2f",y);
	return 0;
	
	
}
