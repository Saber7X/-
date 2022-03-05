#include<stdio.h>
#include<math.h>
int main()
{
	int num[11][11];
	int n,m;
	int sum=0;
	int i,j;
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
	printf("%d",sum);
	
	return 0;
}

