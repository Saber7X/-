#include<stdio.h>
int main()
{
	int n,x,y;
	int t; 
	int ans;
	scanf("%d %d %d",&n,&x,&y);
	t=y/x;
	if(y%x==0)
	{
		ans=n-t;
	}
	else if(y%x!=0)
	{
		ans=n-t-1;
	}
	if(ans>=0)
	{
		printf("%d",ans);
	}
	else
	{
		printf("0");
	}
	
	return 0;
 } 
