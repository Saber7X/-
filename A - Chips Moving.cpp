#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 100005;
int a[N];
map<int, int> ma;
signed main()
{
	int n;
	cin >> n;
	int cnt = 1;
	for (int i = 1; i <= n; i ++ )
	{
		int x; cin >> x;
		if (ma[x] == 0)
		{
			a[cnt ++ ] = x;
		}
		ma[x] ++;
	}
	cnt --;
	int sum = 99999999999;
	for (int i = 1; i <= cnt; i ++ )
	{
		int ans = 0;
		for (int j = 1; j <= cnt; j ++ )
		{
			if (i == j) continue;
			if (abs(a[i] - a[j]) % 2 == 1) ans = ans + ma[a[j]];
		}
		sum = min(sum, ans);
	}
	cout << sum << endl;
	return 0;
}
