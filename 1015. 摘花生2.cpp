#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int g[N][N];
int f[N][N];
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, m;
		cin >> n >> m;
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
				f[i][j] = max(f[i - 1][j], f[i][j - 1]) + g[i][j];
			}
		}
		cout << f[n][m] << endl;
	}
	return 0;
}

