#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int c=0;
	scanf("%d",&n);
	int num[1006]={0};//储存出现次数 
	int numa[1006]={0};
	int i;
	int sum=0;
	int cnt=0;
	for(i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		num[x]++;
		//printf("%d %d   \n",x,num[x]);
	}
	printf("\n");
	for(i=0;i<1006;i++)
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
	
	printf("%d\n",sum);
	for(i=0;i<sum;i++)
	{
		printf("%d ",numa[i]);
	}
	
}
