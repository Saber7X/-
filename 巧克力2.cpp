#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int h[N];
int w[N];
int n,k;
bool f(int a)
{
	long int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=(h[i]/a)+(w[i]/a);
		if(sum>=k)
		{
			return true;
		}
	}
	return false;
	
}

		

int main()
{
	
	
	cin>>n>>k;
	int l=0,r=1e5;
	for (int i = 0; i < n; i++)
	{
		 cin >> h[i] >> w[i];
	 }
	while(l<r)
	{
		int mid=l + (r - l -1 >> 1);
		if(f(mid))
		{
			l=mid;
		}
		else
		{
			r=mid-1;
		}
		
	}
	cout<<r;
	return 0;
}
