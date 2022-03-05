#include<stdio.h>
int main()
{
	char c;
	printf("以c读入\n");
	scanf("%c",&c);
	printf("字符'%c '",c);
	printf("数值%d\n\n",c);//以%c读入 
	 
	printf("以d读入\n");
	int i;
	char d;
	scanf("%d",&i);
	d=i;
	printf("字符'%c '",d);
	printf("数值%d\n",d);//以%d读入 
	
	return 0;
	
 } 
