#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n, m, x;
		cin >> n >> m >> x;
		pair<int, int> a[n + 10];
		for (int i = 0; i < n; i ++ )
		{
			int x;
			cin >> x;
			a[i] = {x, i};
		}
		sort(a, a + n);
		int ans[n + 10];
		for (int i = 0; i < n; i ++ )
		{
			ans[a[i].second] = i % m + 1;
		}
		cout << "YES" << endl;
		for (int i = 0; i < n; i ++ ) cout << ans[i] << " ";
		cout << endl;
	}
	return 0;
}
