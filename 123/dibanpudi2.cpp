#include<stdio.h>
int main()
{
	long long int n,m,a,ans;
    while (scanf("%lld %lld %lld",&n,&m,&a)!=EOF)
	{
	if((m)%(a)!=0)
	{
	  m=(m)/(a)+1;
	}
	else
	{
	  m=(m)/(a);	
	}
	if((n)%(a)!=0)
	{
	 n=(n)/(a)+1;	
	}
	else
	{
	 n=(n)/(a);
	}
	ans=n*m;
	printf("%lld",ans);
    }
    
	return 0;
}
