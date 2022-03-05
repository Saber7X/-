#include<stdio.h>
#include<math.h>
int main()
{
	long long int num[1001][1001];
	long long int n,m;
	long long int sum=0;
	long long int i,j;
	scanf("%lld %lld",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%lld",&num[i][j]);
			int x;
			x=abs(i-j);
			sum=sum+x*num[i][j];
		} 
	}
	printf("%lld",sum);
	
	return 0;
}
