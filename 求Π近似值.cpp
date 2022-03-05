#include<stdio.h>
#include<math.h>
int main()
{
	double sum=0.0,a=1.0,t=1.0;
	for(int i=3;fabs(a)>1e-6;i+=2)
	{
		sum+=a;
		t=-t;
		a=t/i;
	}
	printf("PI=%10.8f\n",sum*4);
	return 0; 
 } 
