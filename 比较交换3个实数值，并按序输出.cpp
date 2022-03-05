#include<stdio.h>//https://blog.csdn.net/a845717607/article/details/88910481
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a>b>c)
	  {
	  	printf("%.2f %.2f %.2f",c,b,a);
	  }
	else if(a>c>b)
	{
		printf("%.2f %.2f %.2f",b,c,a);
	}
	else if(b>a>c)
	{
		printf("%.2f %.2f %.2f",c,a,b);
	}
	else if(b>c>a)
	{
		printf("%.2f %.2f %.2f",a,c,b);
	}
	else if(c>a>b)
	{
		printf("%.2f %.2f %.2f",b,a,c);
	}
	else if(c>b>a)
	{
		printf("%.2f %.2f %.2f",a,b,c);
	}
	return 0;
 } 
