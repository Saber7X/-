#include<stdio.h>
int main()
{
	int n;
	int num[100]={0} ;
	int a,b;
	int c;
	while(scanf("%d",&n)!=EOF)
	{
		
		if(n==0)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&b);
			c=b;
			if(b<0)
			{
				c=-b;
			}
			num[c]=b;
		}	
	    for(int d=0;d<c;c++)
		{
			
			printf("%d",num[d]);
			if(num[d]==0)
			{
				printf("\b");
			}
	 	}
		
	}
	return 0;
 } 
