#include<bits/stdc++.h>
using namespace std;
int n;
char num[20][20];
bool row[20],vol[20],vol1[20];//ºá£¬Êú£¬Ð±
void dfs(int u) 
{
	if(u==n)
	{
		for(int i=0;i<n;i++)
		{
			puts(num[i]);			
		}
		cout<<endl;
		return;
	}
	for(int i=0;i<n;i++)
	{
		if( !row[i] && !vol[u+i] && !vol1[n-u+i] )
		{
			num[u][i] = 'Q';
			row[i]=vol[u+i]=vol1[n-u+i] = true;
			dfs(u+1);
			num[u][i] = '.';
			row[i]=vol[u+i]=vol1[i-u+n] = false;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			num[i][j]='.';
		}
	}
	dfs(0);
	return 0;
}	
		
	
