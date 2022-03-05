#include<bits/stdc++.h>
using namespace std;
int n,k; 

int dfs(int u,int y,int x)//当前位数，剩当前总和，上一个数 
{
	if(u==k)
	{
		if(y==n)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		
	 }
	  int cnt=0;
	for(int i=x;i<=n-y;i++)
	{
		cnt+=dfs(u+1,y+i,i);
	}
	return cnt;	
}



int main()
{
	cin>>n>>k;
	
	cout<<dfs(1,0,0); 
	return 0;
}
