#include<stdio.h>
int main()
{
	int n=0,m=0,cnt=0;
	int i=1;
	scanf("%d %d",&n,&m); 
	while(i<=n)
	{
		i=1;
		i++; 
		int a=i%m;
		if(a==0)
		{
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
 } 
