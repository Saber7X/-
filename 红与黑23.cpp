#include<bits/stdc++.h>
using namespace std; 
int n,m;
char num[50][50];
int xx[4]={-1,0,1,0};
int yy[4]={0,-1,0,1};
int dfs(int x,int y)
{
	int flag=1;
	num[x][y]='#';
	for(int i=0;i<4;i++)
	{
		int a=x+xx[i];
		int b=y+yy[i];
		if(num[a][b]=='.'&&a>=0&&a<n&&b>=0&&b<m)
		{
			//num[x+xx[i]][y+yy[i]]=='#';
			flag+=dfs(x+xx[i],y+yy[i]);
		}
	}
	return flag;
}

int main()
{
	
	while(scanf("%d %d",&m,&n))
	{
		int x,y;
		if(m==0&&n==0)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>num[i][j];
				if(num[i][j]=='@')
				{
					x=i;
					y=j ;
				}
			}
		}
		cout<<dfs(x,y)<<endl;
	}
	
	return 0;
}
