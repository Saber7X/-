#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int num[10005];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	while(m--)
	{
		int x;
		cin>>x;
		int left=0;
		int right=n-1;
		int mid;
		
		//ÕÒ×ó¶Ëµã
		while (left<right)
		{
			mid=(left+right)/2;
			if(num[mid]>=x)
			{
				right=mid;
			}
			else
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
		
		//ÕÒÓÒ¶Ëµã 
		while(left<right)
		{
			mid=(left+right+1)/2;
			if(num[mid]>x)
			{
				right=mid-1;
			 } 
			 else
			 {
			 	left=mid;
			 }
		}
		if(num[right]==x)
		{
			cout<<right<<endl;
		}
	}
	
	return 0;
}
