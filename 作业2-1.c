#include <stdio.h>
int main()
{
	int number,a,b,c,d;
	printf("请输入你要求反序数的四位数字：");
	scanf("%d",&number);
	a=number/1000;
	b=number/100%10;
	c=number/10%10;
	d=number%10;
	printf("你要求的反序数是：%d%d%d%d",d,c,b,a);
	return 0;
 } 
