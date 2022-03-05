#include<stdio.h>
int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	if(a>b)
	  {
	  	printf("%.2f %.2f",b,a);
	  }
	else
	{
		printf("%.2f %.2f",a,b);
	}
	return 0;
 } 
