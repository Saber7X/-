#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,dt;
	scanf("%lf %lf %lf",&a,&b,&c);
	dt=b*b-4*a*c;	
	if(a!=0&&dt>0)
	  {
	  	printf("r1=%7.2f/nr2=%7.2f/n",-b-sqrt(dt)/2*a,-b+sqrt(dt)/2*a);
	   } 

    else if(a!=0&&dt==0)
           {
           	printf("r1=r2=%7.2f/n",-b/2*a);
		   }
	else if(dt<0)
	       {
	       	printf("No real roots!");
		   }
	return 0;
}   

