#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d/%d",&i,&j);
	int a=i;
	int b=j;
	int t;//Ҫ��ֵ�ı�����Ҫ��ֵ���ֵĺ��� 
	while(b>0)
	{
		t=a%b;
		a=b;
		b=t;
	}//b����0ʱѭ���������������Լ����a 
	printf("���Լ����%d\n%d/%d",a,i/a,j/a); 
	return 0;
}
