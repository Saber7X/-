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
	int n;
	cin>>n; 
	int num[100];
	int flag=-111;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
		flag=max(num[i],flag);
	}
	int x;
	
	for(int i=0;i<n;i++)
	{
		if(num[i]<num[i-1])
		{
			num[i]=num[i-1];
		}
		cout<<num[i]<<" ";
	}
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			cout<<num[i]<<" ";
		}
		cout<<endl;
		int mid=erfen(num,0,n,x);
		cout<<mid<<endl;
	}
	return 0;
}
