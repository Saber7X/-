#include<stdio.h>
int f(int x)
{
	if(x<=1)
	{
		return 1;
	}
	return f(x-1)+f(x-2);
}
int main()
{
	int t,sum=0,ans=1,x;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&x);
		if(x!=2) sum++;
		if(i==t&&x!=2)
		{
			ans*=f(sum);
			break;
		}
		if(x==2)
		{
			ans*=f(sum);
			sum=0;
		}
	}
	printf("%d",ans);
 	return 0;
} 
