#include<stdio.h>
int main()
{
	int n,x,cnt=0,a;
	scanf("%d %d",&n,&x);
	for(int i=1;i<=n;i++)
	{
		a=i;
		while(a>0)
		{
			if(a%10==x) cnt++;
			a/=10; 
		}
	}
	printf("%d",cnt);
	return 0; 
}
