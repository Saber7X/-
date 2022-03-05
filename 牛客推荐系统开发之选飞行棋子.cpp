#include<bits/stdc++.h>
using namespace std;
map<int ,string> num;
map<int,int> res;
map<int,int> res1;
int cnt;
int n;
void dfs(int u)
{
	if(u>n)
	{
		cnt++;
		return;
	}
	for(int i=1;i<=4;i++)
	{
		if(res1[i]==1)
		{
			continue;
		}
		for(int j=0;j<n;j++)
		{
			string s=num[i];
			if(s[j]=='0') 
			{
				continue;
			}
			if(res[j]==0)
			{
				res[j]=1;
				res1[i]=1;
				dfs(u+1);
				res[j]=0;
				res1[i]=0;
			}
		}
	}
}
int main()
{
	
	cin>>n;
	for(int i=1;i<=4;i++)
	{
		cin>>num[i];
	}
	dfs(1);
	cout<<cnt/24;
	return 0;
}
