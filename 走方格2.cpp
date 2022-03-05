#include<bits/stdc++.h>
int n,m;
using namespace std;
int dfs(int a,int b)
{
	if(a==m||a==n)
	{
		return 1;
	}
	if((a+1)%2==0&&b%2==0)
	{
		return dfs(a,b+1);
	}
	else if(a%2==0&&(b+1)%2==0)
	{
		return dfs(a+1,b);
	}
	else
	{
		return dfs(a+1,b)+dfs(a,b+1);
	}
	
}
int main()
{
	
	cin>>n>>m;
	cout<<dfs(1,1);
	return 0;
}
