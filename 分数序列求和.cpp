#include<stdio.h>
int main()
{
	double sum=0,a=2,b=1,c=0;
	for(int i=1;i<=20;i++)
	{
		sum=sum+a/b;
		c=a;//��Ҫ��a����c��a���ܴ������� 
		a=c+b;
		b=c;
	}
	printf("%.6f",sum);
	return 0;
 } 
