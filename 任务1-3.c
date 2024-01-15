#include <stdio.h>
int main()
{
	int a,b,c;
	printf("请输入你要交换的变量1：");
	scanf("%d",&a);
    printf("请输入你要交换的变量2：");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("变量1为：%d\n变量2为：%d",a,b);
    return 0;
}
