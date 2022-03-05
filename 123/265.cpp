#include <stdio.h>
int main ()
{
	int n=0;
	long long int a=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		a*=2;
	}
	printf("%lld",a);
	return 0;
}
