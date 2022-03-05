#include<stdio.h>
int main()
{
	long long int n;
	long long int c=0;
	scanf("%lld",&n);
	long long int num[100000001]={0};//储存出现次数 
	long long int numa[100000001]={0};
	long long int i;
	long long int sum=0;
	long long int cnt=0;
	for(i=0;i<n;i++)
	{
		int x;
		scanf("%lld",&x);
		num[x]++;
		//printf("%d %d   \n",x,num[x]);
	}
	//printf("\n");
	for(i=0;i<100000001;i++)
	{
		if(num[i]==0)
		{
			continue;
		}	
		
		sum++;	
		numa[c]=i;
		//printf("%d ",numa[x]);
		c++;
	}
	
	printf("%lld\n",sum);
	for(i=0;i<sum;i++)
	{
		printf("%lld ",numa[i]);
	}
	return 0;
}
