#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 5005;
int a[N], b[N], f[N][N], sum[N];
signed main()
{
	int n; cin >> n;
	for(int i = 1; i <= n; i ++ ) cin >> a[i];
	for(int i = 1; i <= n; i ++ ) 
	{
		cin >> b[i];
		sum[i] = sum[i - 1] + a[i] * b[i];
		f[i][i] = a[i] * b[i];
	}
	int ans = sum[n];
	for(int len = 2; len <= n; len ++ )//枚举区间长度 
	{
		for(int i = 1; i + len - 1 <= n; i ++ ) 
		{
			int l = i, r = i + len - 1;
			f[l][r] = f[l + 1][r - 1] + a[l] * b[r] + a[r] * b[l];
			ans = max(ans, f[l][r] + sum[l-1] + sum[n] - sum[r]);
		}
	}
	cout << ans <<endl;
	return 0;
}
