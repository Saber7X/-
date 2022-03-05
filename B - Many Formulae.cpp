#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 100005;
const int mod = 1e9 + 7;
signed main()
{
	int n, f[N][2], cnt[N][2], a[N];
	cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	// 0加法 
	// 1减法
	f[1][0] = a[1];
	f[1][1] = 0;
	cnt[1][0] = 1;
	cnt[1][1] = 0;
	for(int i = 2; i <= n; i ++ )
	{
		//加法个数 
		cnt[i][0] = (cnt[i - 1][0] + cnt[i - 1][1]) % mod;
		//减法个数 
		cnt[i][1] = cnt[i - 1][0] % mod;
		//该位是加法的总和
		f[i][0] = (cnt[i][0] * a[i] % mod ) + (f[i - 1][1] + f[i - 1][0]) % mod;
		//该位是减法的总和
		f[i][1] = (f[i - 1][0] - cnt[i][1] * a[i] % mod + mod) % mod;
	}
	cout << (f[n][0] + f[n][1]) % mod ;
	return 0;
}
