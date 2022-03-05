#include<stdio.h>
int main()
{
	int n=0,x=0,d=0;
	int a=0,b=0,c=0;
	scanf("%d %d",&n,&x);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&d);
		if(d<x)
		{
			a+=1;
		}
		if(d=x)
		{
			b+=1;
		}
		if(d>x)
		
		{
			c+=1;
		}
	}
	printf("%d %d %d",a,b,c); 
	return 0;
}
