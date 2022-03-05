#include<stdio.h>
#include<math.h>
int sushu(int a)
{
		int i,j;
		
		if(a==1)
		{
			return 0;
		}
		else if(a==2||a==3)
		{
			return 1;
		}
		else if(a>=4)
		{
			for(j=2;j<=sqrt(a);j++)
			{
			
				if(a%j==0)
				{
					return 0;
				
				}
			}
			return 1;
		}
}
int main()
{
	int a[666];
	int n=1,m;int cnt=0;
	int i=0,j,k;
	while(n>0)
	{
		scanf("%d",&n);
		if(n==0) break;
		a[i]=n;
		i++;
		
	}
	
	for(j=0;j<i;j++)//±ãÀûÔ­Êý×Ö 
	{
		for(k=1;k<a[j];k++)// 
		{
			if(sushu(k)==1&&sushu(a[j]-k)==1)
			{
				cnt++;
			}
		}
		printf("%d\n",cnt/2);
		cnt=0;
	}
	return 0;
}
