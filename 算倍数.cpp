#include<stdio.h>
int main()
{
	int n=0,m=0,cnt=0;
	int i;
	scanf("%d %d",&n,&m); 
	for(i=1;i<=n;i++)
	{
		int a=i%m;
		if(n-i<m)
		{
			cnt+=1;
			break;
		 } 
		if(a==0)
		{
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
 } 
