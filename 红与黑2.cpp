#include<bits/stdc++.h>
using namespace std;

int n,m;
char g[25][25];
int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
/*
�����������ϵ�˳��������ܵĸ���
���������ͬʱ��Խ�磬��һֱ����ȥ��������һ��
����������ߣ�����ݣ������ϲ㣬������ߵ�һ��
���һֱ��������һֱ����1
���ķ���ֵ�������к��ߵ�����
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
	
		
