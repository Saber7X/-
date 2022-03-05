#include<bits/stdc++.h>
using namespace std;
int erfen(int a[],int left,int right,int x)//数据范围，左端点，右端点，要找的数
{
	int mid;
	while(1)
	{
		if(a[mid]>=x&&a[mid-1]<x)
		{
			return mid;
		}
	 	mid=(left+right)/2;
		if(a[mid]>=x)
		{
			right=mid;
		}
		
		if(a[mid]<x)
		{
	 		left=mid+1;
		}
	}
	return mid;
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int num[1000];//地形 
	int x;//炮弹高度 
	int sum[1000]={0};
	int flag=-1;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		sum[i]=num[i];
		flag=max(num[i],flag);
	}
	for(int k=0;k<m;k++)
	{
		scanf("%d",&x); 
		
		for(int i=0;i<n;i++)
		{
			if(sum[i]<sum[i-1])
			{
				sum[i]=sum[i-1];
			}
			cout<<sum[i]<<" ";
		}
		cout<<endl;
		int mid=erfen(sum,0,n,x);
		cout<<mid<<endl;
		sum[mid-1]++;
		num[mid-1]++;
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<endl;
	}
	return 0;
}	
		
		
		
		
	
