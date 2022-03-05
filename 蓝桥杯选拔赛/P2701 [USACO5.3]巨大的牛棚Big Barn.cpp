#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int g[N][N];
int f[N][N];
int ff[N][N];
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; i ++ ) 
	{
		int x, y; 
		cin >> x >> y;
		g[x][y] = 1;
	}
	int ans = 0;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= n; j ++ )
		{
			if (!g[i][j])
			{
				f[i][j] = min(f[i][j - 1], min(f[i - 1][j], f[i - 1][j - 1])) + 1;
				ans = max(ans, f[i][j]);
			}
			
		}
	}
	cout << ans << endl;
	return 0;
}
