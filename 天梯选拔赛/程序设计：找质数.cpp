#include<stdio.h>
#include<math.h>
int sushu(int a)
{
	int i;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			return 1;
		}
	}
	return 0;

}
int main()
{
	int t;
	int num[1000];
	int i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<t;i++)
	{
		for(int j=2;j<=num[i]-2;j++)
		{
			if(sushu(j)==0&&sushu(num[i]-j)==0)
			{
				printf("%d %d\n",j,num[i]-j);
				break;
			}
		}
	}
	return 0;
}
