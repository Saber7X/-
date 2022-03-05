#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n + 10];
	for (int i= 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	int sum = 0;
	for (int i = 1; i <= m; i ++ )
	{
		int x; cin >> x;
		int f = lower_bound(a + 1, a + 1 + n, x) - a;
//		cout << f << endl;
		sum += min(abs(a[f] - x), min(abs(a[max(1, f - 1)] - x), abs(a[min(n, f + 1)] - x)));
	}
	cout << sum << endl;
	return 0;
}
