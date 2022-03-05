#include<bits/stdc++.h>
using namespace std;
const int N=3005;
int num[N];
int n,m;
int dfs(int u)
{
	int sum=1;
	if(u==0)
	{
		return sum;
	}
	for(int i=0;i<n;i++)
	{
		sum+=dfs(u-num[i]); 
	}
	return sum;
}
int main()
{
	
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	cout<<dfs(m); 
	
	return 0;
}
