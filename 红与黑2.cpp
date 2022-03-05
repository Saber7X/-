#include<bits/stdc++.h>
using namespace std;

int n,m;
char g[25][25];
int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
/*
按照左下右上的顺序遍历四周的格子
如果可以走同时不越界，就一直走下去，进入下一层
如果不可以走，则回溯，返回上层，进入好走的一层
如果一直不好走则一直返回1
最后的返回值就是所有好走的数量
*/ 
int dfs(int x,int y)
{
	int res=1;
	g[x][y]='#';
	for(int i=0;i<4;i++)
	{
		int a=x+dx[i],b=y+dy[i];
		if(a>=0&&a<n&&b>=0&&b<m&&g[a][b]=='.')
		{
			res+=dfs(a,b);
		}
	}
	return res;
}


int main()
{
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(n==0&&m==0)
		{
			break;
		}
		int x,y;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>g[i][j];
			}
		}	
				
		
				
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(g[i][j]=='@')
				{
					x=i;
					y=j;
				}
			}
		}
		cout<<dfs(x,y)<<endl;
	}
	return 0;
 } 	
	
		
