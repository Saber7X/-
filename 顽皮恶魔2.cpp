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
		
		char g[n + 10][m + 10];
		
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				cin >> g[i][j];
			}
		}
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				if (g[i][j] == '*')
				{
					for (int k = 0; k < 8; k ++ )
					{
						int dx = i + xx[k];
						int dy = j + yy[k];
						if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] != '*')
						{
							g[dx][dy] = 'Z';
						}
					}
				}
			}
		}
//		cout << endl;
//		for (int i = 1; i <= n; i ++ )
//		{
//			for (int j = 1; j <= m; j ++ )
//			{
//				cout << g[i][j];
//			}
//			cout << endl;
//		}
//		cout << endl;
		int ans = 0;
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				if (g[i][j] == 'P') ans ++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

/*
1
5 6
ZPZPZP
P*PZPZ
Z*ZPPZ
PZPZPZ
PP*PPZ
*/
