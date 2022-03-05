#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n;
int res[100]={0};
void dfs(int u)
{
	if(u>n)
	{
		for(int i=1;i<=n;i++)
		{
			if(res[i]==1)
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
		return;
	}
	res[u]=2;
	dfs(u+1);
	
	res[u]=1;
	dfs(u+1);
}
int main()
{
	
	cin>>n;
	dfs(1);
	return  0;
}
