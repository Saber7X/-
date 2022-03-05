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
			printf("大了"); 
		}
		else if(b<a)
		{
			printf("小了"); 
		}
		
	}
	while(b!=a);
	printf("对了，猜了%d次，正确答案是%d",c,a);
	return 0;
	
 } 
