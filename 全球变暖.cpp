#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int dao[110][110];
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%c",&dao[i][j]);
			if(dao[i][j]=='#')
			{
				cnt++;
			}
		}
	}
	cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(dao[i][j]=='#')
			{
				if(dao[i+1][j]=='#'&&dao[i-1][j]=='#'&&dao[i][j+1]=='#'&&dao[i][j-1]=='#')
				{
					cnt++;
				}
			}
		}
	}
	cout<<cnt;
}
