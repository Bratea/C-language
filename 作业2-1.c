#include <stdio.h>
int main()
{
	int number,a,b,c,d;
	printf("��������Ҫ����������λ���֣�");
	scanf("%d",&number);
	a=number/1000;
	b=number/100%10;
	c=number/10%10;
	d=number%10;
	printf("��Ҫ��ķ������ǣ�%d%d%d%d",d,c,b,a);
	return 0;
 } 
