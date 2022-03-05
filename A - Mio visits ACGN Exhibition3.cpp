#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 550, mod = 998244353;
int g[N][N];
int f[N][N];
int sum0[N][N], sum1[N][N];

signed main()
{
	int n, m, c0, c1;
	cin >> n >> m >> c0 >> c1;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			cin >> g[i][j];
		}
	}
	for (int i = 1; i <= m; i ++ )
	{
		f[1][i] = 1;
		sum1[1][i] = sum1[1][i - 1] + g[1][i];
	}
	
	for (int i = 1; i <= n; i ++ )
	{
		f[i][1] = 1;
		sum1[i][1] = sum1[i - 1][1] + g[i][1];
	}
	
	for (int i = 2; i <= n; i ++ )
	{
		for (int j = 2; j <= m; j ++ )
		{
			sum1[i][j] = sum1[i - 1][j] + sum1[i][j - 1] - sum1[i - 1][j - 1];
		}
	}
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			sum0[i][j] = i * j - sum1[i][j];
		}
	}
	
	for (int i= 2; i <= n; i ++ )
	{
		for (int j = 2; j <= m; j ++ )
		{
			f[i][j] = f[i - 1][j] + f[i][j - 1];
			f[i][j] %= mod;
		}
	}
	int ans = 0;
	for (int i= 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			if (sum1[i][j] >= c1 && sum0[i][j] >= c0) 
			{
				ans += f[n - i + 1][m - j + 1];
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
