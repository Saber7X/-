#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n; scanf("%d", &n);
	bool flag = 0;
	for (int i = 1; i <= n; i ++ )
	{
		int x;
		scanf("%d", &x);
		bool f = 0;
		for (int j = i + 1; j >= 2; j -- )
		{
			if (x % j != 0)
			{
//				cout << "YES" << endl;
				f = 1;
				break;
			}
		}
		if (!f)
		{
			flag = 1;
		}
	}
	if (flag) cout << "NO" << endl;
	else cout << "YES" << endl;
	
}
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		solve();
	}
	return 0;
}
