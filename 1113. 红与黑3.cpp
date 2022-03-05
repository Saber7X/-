#include<bits/stdc++.h>
using namespace std;
const int N = 100;

int n, m; //n––m¡–

char g[N][N];

int ans = 1;

int xx[4] = {-1, 0, 1, 0};
int yy[4] = {0, 1, 0, -1};

void dfs(int x, int y)
{
	
	for (int i = 0; i < 4; i ++ )
	{
		int dx = x + xx[i];
		int dy = y + yy[i];
		
		if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] == '.')
		{
			g[dx][dy] = '#';
			ans ++;
			dfs(dx, dy);
		}
	}
	
}

int main()
{
	while (cin >> m >> n)
	{
		if (n == 0 && m == 0) break;
		
		int x, y;
		ans = 1;
		
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				cin >> g[i][j];
				if (g[i][j] == '@') 
				{
					x = i, y = j;
				}
			}
		}
		dfs(x, y);
		cout << ans << endl;
	}
	return 0;
}
