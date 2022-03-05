#include<bits/stdc++.h>
using namespace std;
const int N = 150;

int n, m;
int g[N][N];
int gg[N][N];
 
int xx[2] = {1, 0};
int yy[2] = {0, 1};

int ans = 0;
void dfs(int x, int y, int f)
{
	ans = max(ans, f);
	
	for (int i = 0; i < 2; i ++ )
	{
		int dx = x + xx[i];
		int dy = y + yy[i];
		if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && gg[dx][dy] == 0)
		{
			gg[dx][dy] = 1;
			dfs(dx, dy, f + 1);
		}
	}
	ans = max(ans, f);
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			char x; 
			cin >> x;
			if (x == '.')
			{
				g[i][j] = 0;
			}
			else
			{
				g[i][j] = 1;
			}
		}
	}
	
	memcpy(gg, g, sizeof g);
	
	dfs(1, 1, 1);
	
	cout << ans << endl;
	return 0;
}

/*
5 5
..###
#.###
....#
.##.#
#....
*/
