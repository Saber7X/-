/*
while(1)
{
	mid=(left+right)/2;
	if(m<num[mid])
	{
		right=mid-1;
	}
	else if(m>num[mid])
	{
		left=mid+1;
	}
	if(m==num[mid])
	{
		printf("%d\n",mid);
		break;
	}
	if(left>right)
	{
		printf("-1\n");
		break;
	}
}
		*/
#include<bits/stdc++.h>
using namespace std;
int ef(int num[],int left,int right,int x)
{
	int mid;
	while(1)
	{
		mid=(left+right)/2;
		if(num[mid]>x)
		{
			right=mid-1;
		}
		else if(num[mid]<x)
		{
			left=mid+1;
		}
		if(num[mid]==x)
		{
			return mid;
		}
		if(left>right)
		{
			mid=-1;
			return mid;
		}
	}
}
int main()
{
	int n,x;
	while(scanf("%d",&n)!=EOF)
	{
		int num[205]={0};
		for(int i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		int left=0;
		int right=n-1;
		int mid;
		scanf("%d",&x);
		printf("%d\n",ef(num,left,right,x));
	}	
	return 0;
} 	
		

