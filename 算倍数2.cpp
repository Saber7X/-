
#include<stdio.h>
int main()
{
	int n=0,m=0,cnt=0;
	int i;
	scanf("%d %d",&n,&m); 
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(m*i==j)
			{
				cnt+=1;
			}
		
	    }
		
	}
	printf("%d",cnt);
	return 0;
 } 
