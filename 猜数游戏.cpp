#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand()%100;
	int b,c=0;
	do
	{
		scanf("%d",&b);
		c++;
		if(b>a)
		{
			printf("����"); 
		}
		else if(b<a)
		{
			printf("С��"); 
		}
		
	}
	while(b!=a);
	printf("���ˣ�����%d�Σ���ȷ����%d",c,a);
	return 0;
	
 } 
