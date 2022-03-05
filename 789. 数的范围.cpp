#include<iostream> 
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int num[100005];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	while(m--)
	{
		int x;
		cin>>x;
		int left=0;
		int right=n-1;
		int mid;
		while(left<right)
		{
			mid=(left+right)/2;
			if(num[mid]>=x)
			{
				right=mid;
			}
			if(num[mid]<x)
			{
				left=mid+1;
			}
			
		}
		if(num[left]==x)
		{
			cout<<left<<" ";
		}
		else
		{
			cout<<"-1 -1"<<endl;
			continue;
		}
		left=0;
		right=n-1;
		while(left<right)
		{
			mid=(left+right+1)/2;
			if(num[mid]<=x)
			{
				left=mid;
			}
			if(num[mid]>x)
			{
				right=mid-1;
			}
			
		}
		if(num[right]==x)
		{
			cout<<right<<endl;
		}
	}
	return 0;
}
