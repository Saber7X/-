#include<stdio.h>
int main()
{
	int number,a,b;
	do
	{
		scanf("%d",&a);
		if(a!=-1) 
		{
		  number++;
		  b+=a;
	    }
	}
	while(a!=-1);
	printf("%f\n",1.0*b/number);
	return 0;
 } 
