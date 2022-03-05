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
	int flag=-11;
	cin>>n>>m; 
	int num[50005];
	int sum[50005];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
		sum[i]=num[i];
		flag=max(flag,num[i]);
	}
	int x;
	int mid=0;
	for(int k=0;k<m;k++)
	{
		
		
		scanf("%d",&x);
		for(int i=mid;i<n;i++)
		{
			if(num[i]<num[i-1]&&i!=0)
			{
				num[i]=num[i-1];
			}
			//cout<<num[i]<<" ";
		}
		if(x>flag||x<num[0])
		{
			continue;
		}
		/*for(int i=0;i<n;i++)
		{
			cout<<num[i]<<" ";
		}
		cout<<endl;*/
		mid=erfen(num,0,n,x);
		num[mid-1]++;
		sum[mid-1]++;
		flag=max(sum[mid-1],flag);
		//cout<<mid<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<sum[i]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		cout<<sum[i]<<endl;
	}
	return 0;
}		
		
	
