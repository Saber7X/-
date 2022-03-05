#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5  + 10;
int a[N];
int w[N];
signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n, k; cin >> n >> k;
		for (int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
		}
		sort(a + 1, a + 1 + n);
		int l = 1, r = n;
		int sum = 0;
		int cnt = 0; //1µÄ¸öÊý 
		for (int i = 1; i <= k; i ++ )
		{
			cin >> w[i];
			if (w[i] == 1) cnt ++;
		}
		sort(w + 1, w + 1 + k);
		for (int i = 1; i <= cnt; i ++ )
		{
			sum += a[r];
			sum += a[r];
			r --;
		}
		for (int i = k; i >= 1; i -- )
		{
			if (w[i] == 1) break;
			sum = sum + a[r] + a[l];
			r --;
			l = l + w[i] - 1;
		}
		cout << sum << endl;
	}
	return 0;
}
