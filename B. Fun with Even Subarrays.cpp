#include<bits/stdc++.h> 
#define int long long
using namespace std;

const int N = 2e6 + 10;
int a[N];
signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i ++ ) cin >> a[i];
		
		int ans = 0;
		for (int i = n - 1; i >= 1; i -- )
		{
			if (a[i] != a[i + 1])
			{
				int x = a[i + 1];
				a[i] = a[i + 1];
				ans ++;
				int f = n - (n - i) * 2 + 1;
				i = max((int)1, f);
				a[i] = x;
			}
		}
		
		cout << ans << endl;
		
	}
	return 0;
}
