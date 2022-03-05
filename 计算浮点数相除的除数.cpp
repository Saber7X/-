#include<stdio.h>
int main()
{
	int k=0;
	double r,a,b;
	scanf("%lf %lf",&a,&b);
	do
	{r=a-k*b;
		k++;
		
	}
	while(a>k*b);
	
	printf("%.6f",r);
	return 0;
}
