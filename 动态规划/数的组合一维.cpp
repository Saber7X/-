#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n,m;
	int v[1005]={0};
	int f[1000]={0};
	cin>>n>>m;
	f[0]=1;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=v[i];j--)
		{
			
			f[j]+=f[j-v[i]];
		}
	}
	cout<<f[m];
	return 0;
 } 
