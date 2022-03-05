#include<bits/stdc++.h>
using namespace std;
int p[1005];
int find(int x)
{
	if(p[x]!=x)
	{
		p[x]=find(p[x]);
	}
	return p[x];
 } 
int main()
{
	int n,m,cnt=0;
	cin>>n>>m;
	if(m==0)
	{
		cout<<n;
		return 0;
	}
	for(int i=0;i<=1005;i++)
	{
		p[i]=i;
	}
	int k=m;
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		p[find(a)]=find(b);
		
	}
	int sum=2;
	for(int i=1;i<=n;i++)
	{
		if(p[i]!=i) k+=sum,sum++;
	}
	cout<<k<<endl;
	return 0;
}
