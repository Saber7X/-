#include<stdio.h>
	int num[1005][1005];
int main()
{
	int n;
	scanf("%d",&n);
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	int s=0;
	int a,b;
	for(int i=1;i<=n;i++)
	{
		int x=0,y=0;
		for(int j=1;j<=n;j++)
		{
		x=x+num[i][j];// ÐÐ 
		y=y+num[j][i];//ÁÐ 
		}
		if(i==1)
		{
			a=x;
			b=y;
		}
		else
		{
			if(x!=a)s=1;
			if(y!=b)s=1;
		}
		
	}
	if(s==0)
	{
		printf("YES");
	}
	else if(s==1)
	{
		printf("NO");
	}
	return 0;
}

