#include <stdio.h>
#include <math.h>
int main()
{
	float sum,wage=1000.00;	
	int work;
	printf("������������۶�:\n");
	scanf("%d",&work);
	switch (work/10000) 
	{
		case 0:
		printf("��Ĺ���Ϊ:%.2f\n",wage);break;
		case 1:
		printf("���Ĺ���Ϊ:%.2f\n",sum=wage+(work-10000)*0.05);break;
	    case 2:
		case 3:
	    case 4:
	    printf("���Ĺ���Ϊ:%.2f\n",sum=wage+(work-10000)*0.06);break;
		case 5:
		case 6:
	    case 7:
		case 8:
		case 9:		
		printf("���Ĺ���Ϊ:%.2f\n",sum=wage+(work-10000)*0.07);break;
		default:
		printf("���Ĺ���Ϊ:%.2f\n",sum=wage+(work-10000)*0.08);break;
     	return 0;
}}
