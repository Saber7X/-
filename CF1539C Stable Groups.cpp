#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 100;
int a[N], b[N];

signed main()
{
	int ans = 1;
	int n, k, x;
	cin >> n >> k >> x;
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	
	sort(a + 1, a + 1 + n);
	
	for (int i = 2; i <= n; i ++ )
	{
		b[i - 1] = abs(a[i] - a[i - 1]);
	}
	
	sort(b + 1, b + n);
	
	for (int i = 1; i < n; i ++ )
	{
		if (b[i] > x)
		{
			if (k >= (b[i] - 1) / x)
			{
				k -= (b[i] - 1) / x;
			}
			else ans ++;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
