#include<bits/stdc++.h> 
using namespace std;

int xx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int yy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n, m; cin >> n >> m;
		int g[n + 10][m + 10] = {0};
		
		for (int i = 1; i <= m; i ++ ) 
		{
			if (g[1][i] == 0)
			{
				g[1][i] = 1;
				for (int j = 0; j < 8; j ++ )
				{
					int dx = 1 + xx[j];
					int dy = i + yy[j];
					g[dx][dy] = -1;
				}
			}
		}
		for (int i = 1; i <= m; i ++ ) 
		{
			if (g[n][i] == 0)
			{
				g[n][i] = 1;
				for (int j = 0; j < 8; j ++ )
				{
					int dx = n + xx[j];
					int dy = i + yy[j];
					g[dx][dy] = -1;
				}
			}
		}
		
		for (int i = 1; i <= n; i ++ ) 
		{
			if (g[i][1] == 0)
			{
				g[i][1] = 1;
				for (int j = 0; j < 8; j ++ )
				{
					int dx = i + xx[j];
					int dy = 1 + yy[j];
					g[dx][dy] = -1;
				}
			}
		}
		
		for (int i = 1; i <= n; i ++ ) 
		{
			if (g[i][m] == 0)
			{
				g[i][m] = 1;
				for (int j = 0; j < 8; j ++ )
				{
					int dx = i + xx[j];
					int dy = m + yy[j];
					g[dx][dy] = -1;
				}
			}
		}
		
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				if (g[i][j] == 1) cout << 1;
				else cout << 0;
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0; 
}
