#include<stdio.h>
int main()
{
	int a,b;
	int i;
	
	int sum=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		int c=i;
		while(c>0)
		{
			sum=sum+c%10;
			c/=10; 
		}
		
	}
	printf("%d",sum);
	return 0;
}
