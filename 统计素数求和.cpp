#include<stdio.h>
int main()
{
	int m,n;int j=0;int sum=0;
	scanf("%d %d",&m,&n);
	if (m==1)
	{
		m=2;
	}
	for(int i=m;i<=n;i++)
	{
		int is=1;
		for(int b=2;b<i-1;b++)
		{
			int c=i%b; 
			if(c==0)
			{
				is=0;
				break;
			}
		}
		if(is==1)
		{
			j++;
			sum+=i;
			
		}
	 } 
	
	printf("%d %d",j,sum);
	
	return 0;
 } 
