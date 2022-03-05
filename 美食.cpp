#include<stdio.h>
int main()
{
	long int n,x,i;
	long int num[10001];
	long int sum=0;
	long int zsum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		num[i]=x;
		
	}for(i=0;i<n;i++)
		{
			sum+=num[i];
			zsum+=sum;
		}
	printf("%ld",zsum);
	return 0;
		
	
}
