#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int a[N];
signed main()
{
	int n, p;
	cin >> n >> p;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	int ans = 0;
	for (int i = 1; i <= n; i ++ )
	{
		int x = p * a[i];
		int f = upper_bound(a, a + 1 + n, x) - a;
//		if (x >= a[f] )
//		{
//			cout <<f <<":: " << a[f] << endl;
			ans = max(ans, f - i);
//		}
	}
	cout  <<ans;
	return 0;
}
