#include<bits/stdc++.h>
using namespace std;
int erfen(long long int a[],long long int L,long long int R,long long int x)
{
	long long int mid;
	while(L<=R)
	{
		mid=(L+R)/2;
		if(a[mid]==x)
		{
			return x;
		}
		else if(a[mid]>x)
		{
			R=mid-1;
		 } 
		 else if(a[mid]<x)
		 {
		 	L=mid+1;
		 }
	}
	return -1;
	
	
}


int main()
{
	int n,m;
	cin>>n>>m;
	long long int num[n];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	int x;
	for(int i=0;i<m;i++)
	{
		scanf("%d",&x);
		if(erfen(num,0,n-1,x)!=-1)
		{
			cout<<x<<endl;
		}
		else if(erfen(num,0,n-1,x)==-1)
		{
			while(1)
			{
				x++;
				if(erfen(num,0,n-1,x)!=-1)
				{
					cout<<x<<endl;
					break;
				}
				if(x>num[n-1])
				{
					cout<<"-1"<<endl;
					break;
				}
			}
		}
		
	}
	return 0;
}
