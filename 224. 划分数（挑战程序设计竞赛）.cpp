#include<bits/stdc++.h> 
using namespace std;
const int N = 1e3 + 10;
int f[N][N];
int main()
{
	int n, m, mod;
	cin >> n >> m >> mod;
	for (int i = 0; i <= m; i ++ ) f[0][i] = 1;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			f[i][j] = f[i][j - 1];
			if (i >= j) f[i][j] += f[i - j][j];
			f[i][j] %= mod;
		}
	}
	cout << f[n][m] << endl;
	return 0;
}
