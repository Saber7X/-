#include<bits/stdc++.h>
using namespace std;
const int N = 100;
char g[N][N];
int xx[4] ={-1, 0, 1, 0};
int yy[4] ={0, 1, 0, -1};
int n, m;
int good = 0, bad = 0;
void fengbi(int x, int y)
{
	for(int i = 0; i < 4; i ++ )
	{
		int dx = x + xx[i];
		int dy = y + yy[i];
		if(g[dx][dy] == '.' && dx >= 1 && dx <= n && dy >= 1 && dy <= m)
		{
			g[dx][dy] = '#';
		}
	}
}
void dfs(int x, int y) 
{
	if(g[x][y] == '#')
	{
		return;
	}
	if(g[x][y] == 'G')
	{
		good --;
	}
	if(g[x][y] == 'B')
	{
		bad ++;
	}
	g[x][y] = '#';//标记为走过 
	for(int i = 0; i < 4; i ++ )
	{
		int dx = x + xx[i];
		int dy = y + yy[i];
		if(dx >= 1 && dx <= n && dy > 0 && dy <= m && g[dx][dy] !='#')
		{
			dfs(dx, dy);
		}
	}
}
int main()
{
	int T;
	cin >> T;
	while(T -- )
	{
		
		cin >> n >> m;
		for(int i = 1; i <= n; i ++ )
		{
			for(int j = 1; j <=m; j ++ )
			{
				cin >> g[i][j];
			}
		}
		for(int i = 1; i <= n; i ++ )
		{
			for(int j = 1; j <= m; j ++ )
			{
				if(g[i][j] == 'B')
				{
					fengbi(i, j);
				}
			}
		}
		good = 0, bad = 0;
		for(int i = 1; i <= n; i ++ )
		{
			for(int j = 1; j <= m; j ++ )
			{
				if(g[i][j] == 'G')
				{
					good ++;
				}
			}
		}
		dfs(n, m);
		if(good == 0 && bad == 0) cout << "yes" << endl;
		else
		{
			cout<<"No" << endl;
		}
	}
	return 0;
}
