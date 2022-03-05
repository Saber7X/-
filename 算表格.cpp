#include<stdio.h>
#include<math.h>

int main()
{
	long int num[10000][10000];
	long int n,m;
	long int sum=0;
	long int i,j;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&num[i][j]);
			int x;
			x=abs(i-j);
			sum=sum+x*num[i][j];
		} 
	}
	printf("%ld",sum);
	
	return 0;
}
