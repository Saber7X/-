#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		int minn = 1e10, ans = 0;
		int a[100005];
		for (int i = 1; i <= n; i++ )
		{
			cin >> a[i];
			if (a[i] <= 0) ans ++;
		}
		
		sort(a + 1, a + n + 1);
		
		for (int i = 2; i <= ans; i ++ )
		{
			minn = min(minn, a[i] - a[i - 1]);
		}
		for (int i = ans + 1; i <= n; i ++ )
		{
			minn = min(minn, a[i] - a[i - 1]);
			if (minn >= a[i]) ans ++;
			else break;
		}
		cout << ans << endl;
	}
	return 0;
}
