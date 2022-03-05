#include<stdio.h>
int main()
{
	int n,i,j;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&j);
		sum+=j;
	}
	printf("%d",sum);
	return 0;
}
