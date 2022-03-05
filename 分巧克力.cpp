#include<bits/stdc++.h>
using namespace std;
int w[100005],h[100005];
int n,k;
int chack(int a)//这个不能和全局变量一样 
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=(w[i]/a)*(h[i]/a);
	}
	return sum;
}
int erfen(int left,int right)
{
	while(left<right)
	{
		int mid=(left+right+1)/2;
		if(chack(mid)>=k)
		{
			left=mid;
		}
		else
		{
			right=mid-1;
		}
	}
	return right;
 } 

			
	

int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>w[i]>>h[i];
	}
	int left=0;int right=100005;
	
	cout<<erfen(left,right);
	return 0;
	
	
}
