#include<stdio.h>
int main()
{
	int a,sum=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	   {
	   	sum=sum+i;
	   }//break语句就是指循环语句 
	printf("%d\n",sum);
	
	return 0;
	
}
