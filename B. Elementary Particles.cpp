#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		int a[n + 10];
		map<int, int> m;
		int f = 1;
		int minn = 0x3f3f3f3f;
		for (int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
			if (m[a[i]] != 0)
			{
				f = 0;
				minn = min(minn, i - m[a[i]] + 1);
			}
			m[a[i]] = i;
		}
		
		if (f == 1)
		{
			cout << -1 << endl;
			continue;
		}
		cout << n - minn + 1 << endl;
	}
	return 0;
}
