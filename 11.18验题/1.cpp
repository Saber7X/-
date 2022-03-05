#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N], b[N];
int ans[N];
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		memset(ans, 0, sizeof ans);
		int n, m; cin >> n >> m;
		for (int i = 1; i <= n; i ++ ) cin >> a[i];
		for (int i = 1; i <= n; i ++ )
		{
			cin >> b[i];
			if (a[i] + m > b[i])
			{
				ans[i] = a[i] + m - b[i];
			}
		}
		for (int i = 1; i <= n; i ++ )
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
