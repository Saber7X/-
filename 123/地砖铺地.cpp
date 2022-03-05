#include<stdio.h>
int main()
{
	long long int n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
	if (m%a==0,n%a==0)
	{
	   printf("%lld",n/a*m/a);
	}
	else if(m%a!=0,n%a==0)
	 
	{
	  	printf("%lld",(m/a+1)*(n/a));
	}
	else if(n%a!=0,m%a==0)
	{
	  printf("%lld",(n/a+1)*(m/a));	
	}
	else if(n%a!=0,m%a!=0)
	{
	  printf("%lld",(n/a+1)*(m/a+1));	
	}
	return 0;
}
