#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N = 400;
int g[N][N];
int f[N][N];

int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= i; j ++ )
		{
			cin >> g[i][j];
		}
	}
	for (int i = 0; i <= n; i ++ )
	{
		for (int j = 0; j <= n; j ++ )
		{
			f[i][j] = -0x3f3f3f3f;
		}
	}
	f[1][1] = g[1][1];
	for (int i = 2; i <= n; i ++ )
	{
		for (int j = 1; j <= i; j ++ )
		{
			f[i][j] = max (f[i - 1][j], f[i - 1][j - 1]) + g[i][j];
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i ++ )
	{
		ans = max(ans, f[n][i]);
	}
	cout << ans << endl;
	return 0;
}
