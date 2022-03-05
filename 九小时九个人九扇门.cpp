#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N = 1e5 + 10, mod = 998244353;
int a[N];
int f[N][10];
int sum[N];
signed main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
		a[i] %= 9;
	}
	f[0][0] = 1;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 0; j < 9; j ++ )
		{
			f[i][(j + a[i]) % 9] = (f[i][(j + a[i]) % 9] + f[i - 1][j]) % mod;
			f[i][j] += (f[i - 1][j] % mod);
			f[i][j] %= mod;
		}
	}
	for (int i = 1; i < 9; i ++ )
	{
		cout << f[n][i] << " ";
	}
	cout << f[n][0] - 1;
	return 0;
}
