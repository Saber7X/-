#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int l, n;
		cin >> l >> n;
		int a[n + 10];
		int maxn = 0, minn = -0x3f3f3f3f;
		for (int i = 1; i <= n; i ++ ) cin >> a[i];
		sort(a + 1, a + 1 + n);
		for (int i = 1; i <= n; i ++ )
		{
			maxn = max(maxn, max(a[i], l - a[i]));
			minn = max(minn, min(a[i], l - a[i]));
		}
		cout << minn << " " << maxn << endl;
	}
	return 0;
}
