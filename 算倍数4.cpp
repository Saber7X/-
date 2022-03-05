#include<stdio.h>
int main()
{
	int a,m,n,b=0;int i=1;
	scanf("%d %d",&n,&m); 
	while(i<=n)
	{
		
		if(i%m==0)
		{
			b++;
		}
		i++;
		
	}
	printf("%d",b);
  	return 0;
}
