#include<bits/stdc++.h>
#define int long long
 
using namespace std;
const int N = 2e5 + 10;

int a[N];
int n, m;

bool check(int x)
{
	int d = a[1] + x;
	int sum = 1;
	for (int i = 2; i <= n; i ++ )
	{
		if (a[i] < d) continue;
		else
		{
			sum ++;
			d = a[i] + x;
		}
	}
	return sum >= m;
}

signed main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	int  l = a[1], r = a[n] - a[1];
	int ans = -1;
	while (l <= r) //要小于等于 
	{
		int mid = (l + r) / 2;
		if (check(mid))
		{
			l = mid + 1;
			ans = mid;
		}
		else
		{
			r = mid - 1;
		}
	}
	cout << ans << endl;
	return 0; 
}
