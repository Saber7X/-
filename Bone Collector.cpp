#include<bits/stdc++.h> 
#define int long long
using  namespace std;
const int N = 1e3 + 10;
int f[N][N];
int num[N];
int w[N];
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		memset(f, 0, sizeof f);
		int n; cin >> n;
		int v; cin >> v;
		for (int i = 1; i <= n; i ++ ) cin >> w[i];
		for (int i = 1; i <= n; i ++ ) cin >> num[i];
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 0; j <= v; j ++ )
			{
				f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + num[i]);
			}
		}
		cout << f[n][v] << endl;
	}
	return 0;
}
