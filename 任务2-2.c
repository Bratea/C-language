#include <stdio.h>
int main()
{
	int a,b,c;
	printf("请输入一个数字：");
	scanf("%d",&c);
	a=2+c--;
	b=--c+2;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d",c);
	return 0;
}
