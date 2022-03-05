#include<stdio.h>
int main()
{
	int h,r;
	int t;
    double pi=3.14159;
	double sum;
	scanf("%d %d",&h,&r);
	sum=pi*r*r*h/1000;
	if(20%sum==0)
	{
		printf("%d",20/sum);
	}
	else if(20%sum!=0)
	{
		printf("%d",20/sum+1);
	}
	return 0;
 } 
