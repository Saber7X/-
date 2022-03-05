#include<bits/stdc++.h>
using namespace std;
const int N  = 1e3 + 10;

int n, m;
int v[N], w[N], s[N];
int f[N][N];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> v[i] >> w[i] >> s[i];
	}
	for (int i = 1; i <= n; i ++ ) //枚举前i种物品 
	{
		for (int j = 0; j <= m; j ++ ) //枚举体积 
		{
			f[i][j] = f[i - 1][j];
			for (int k = 0; k * v[i] <= j && k <= s[i]; k ++ )
			{
				f[i][j] = max(f[i][j], f[i - 1][j - v[i] * k] + w[i] * k);
			}
		}
	}
	cout << f[n][m] << endl;
	return 0;
}
