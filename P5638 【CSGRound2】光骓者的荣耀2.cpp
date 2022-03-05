#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 10;
int n, k;
int a[N], sum[N];
signed main()
{
	cin >> n >> k;
	int maxn = 0;
	k = min(n - 1, k);
	for (int i = 1; i <= n - 1; i ++ )
	{
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	for (int i = k; i <= n - 1; i ++ ) 
	{
		maxn = max(sum[i] - sum[i - k], maxn);
	}
	
	cout << sum[n - 1] - maxn << endl;
	return 0;
}
