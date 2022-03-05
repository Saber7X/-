#include<bits/stdc++.h>
using namespace std;

int f[10010];

int n,m;

int main()
{
	
	
	f[0]=1;
	cin>>m>>n;
	int x;
	for(int i=0;i<n;i++)
	{	
		cin>>x;
		for(int j=m;j>=x;j--)
		{
			f[j]+=f[j-x];
		}
		
	}
		
		
		
	
	
	cout<<f[m];
	return 0;
}
