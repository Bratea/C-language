#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,a;
	printf("��������Ҫ���Xֵ��");
	scanf("%f",&x);
	a=exp(x);
	y=sqrt(x*x+a)+1;
	printf("�����:%6.2f",y);
	return 0;
	
	
}
