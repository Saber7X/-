#include<stdio.h>
int main()
{
	int i,j,k,n,x,sum=0;
	long int d[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%d",&d[i]); 
        sum+=d[i];
	}
	scanf("%d",&x);
	if(x==n)
	{
       printf("%d",sum);

	}
	else
	{
       for(i=n-1;i>=x;i--)
       {
       		sum+=d[i];
	   }
	   printf("%d",sum);
	}
	return 0;
	
}
