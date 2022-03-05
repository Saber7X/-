#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int i;
	int sum=0;
	int cnt=0,cnt1=0;
	for(i=a;i<=b;i++)
	{
		printf("%5d",i);
		sum+=i;
		cnt++;
		if(cnt==5)
		{
			printf("\n");
			cnt=0;
		}
		else if(i==b&&cnt!=5)
		{
			printf("\n");
		}
	}
	printf("Sum = %d",sum); 
	return 0;
}
