#include<stdio.h>
int main()
{
	int h,r;
	int t;
    double pi=3.14159;
	double sum;
	scanf("%d %d",&h,&r);
	sum=pi*r*r*h/1000;//ÿͰ��װ������ 
	t= 20/sum+1;
	printf("%d",t);
	
	return 0;
 } 
