#include<stdio.h>
int main()
{
	long long int a,b,c,d;
	long long int s;
	long long int i;
	long long int suma,sumb,sumc,sumz;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	suma=a*1;
	while(b>=0)
	{
		s=b%10;
		for(i=2;i<=4;i++)
		{
			s=s*i;
			sumb+=s;
			
		}
		b/=10;
	}
	while(c>0)
	{
		s=c%10;
		for(i=5;i<=10;i++)
		{
			s=s*i;
			sumc*=s;
			
		}
		c/=10;
	}
	sumz=(suma+sumb+sumc)%11;
	if(sumz==d)
	{
		printf("Right");
	}
	else
	{
		printf("%lld-%lld-%lld-%lld",a,b,c,sumz);
	}
	return 0;
	
}
