#include <stdio.h>
int main()
{
	int a,b,c;
	printf("��������Ҫ�����ı���1��");
	scanf("%d",&a);
    printf("��������Ҫ�����ı���2��");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("����1Ϊ��%d\n����2Ϊ��%d",a,b);
    return 0;
}
