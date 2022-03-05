#include<bits/stdc++.h>
using namespace std;
long long int n,m;
long long int num[1000006];

int erfen(long long int left,long long int right,long long int x)
{
	long long int mid;
	
	while(left<=right)
	{
		mid=(left+right+1)/2;
		if(num[mid]<x)
		{
			left=mid+1;
		}
		else if(num[mid]>x)
		{
			right=mid-1;
		}
		if(num[mid]==x)
		{
			return x;
		}
	}
	return -1;
	
}

int main()
{
	cin>>n>>m;
	
	for(long long int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	while(m--)
	{
		long long int x;
		cin>>x;
		while(1)
		{
			if(erfen(0,n-1,x)!=-1)
			{
				cout<<x<<endl;
				break;
			}
			else
			{
				x++;
			}
			if(x>num[n-1])
			{
				printf("-1\n");
				break;
			}
		}
	}

	return 0;
}
