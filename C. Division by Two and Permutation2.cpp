#include <bits/stdc++.h> 
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
		for (int i = 1; i <= n ; i ++ )
		{
			cin >> a[i];
		}
		bool st[n + 10] = {0};
		//因为越大的数可以凑出的数就越少，所以尽量先凑出大的数，然后再往小的看 
		for (int i = 1; i <= n; i ++ )
		{
			int x = a[i];
			while (x > n) x /= 2;
			while (st[x] && x > 0) x /= 2;
			st[x] = 1;
		}
		int f = 1;
		for (int i= 1; i <= n; i ++ ) 
		{
			if (!st[i])
			{
				cout  << "NO" << endl;
				f = 0;
				break;
			}
		}
		if (f) cout << "YES" << endl;
	}
	return 0;
}
