#include<stdio.h>//https://blog.csdn.net/IT_Boy_/article/details/97042621
int main()
{
	int a=0,sum=0;
	while(sum<=1000)
	     {
	     	a++;
	     	sum=a+sum;
		 }
	printf("%d",a);
	return 0;
 } 
