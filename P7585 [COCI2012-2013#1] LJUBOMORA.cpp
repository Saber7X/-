#include<bits/stdc++.h>
#define int long long
using namespace std;

int n, m;

const int N = 5e7 + 10;

int a[N];

bool check(int x)
{
	int sum = 0;
	for (int i = 1; i <= m; i ++ )
	{
		sum += a[i] / x;
		if (a[i] % x != 0)
		{
			sum ++;
		}
	}
	return sum > n;
}

signed main()
{
	cin >> n >> m;
	int sum = 0;
	for (int i = 1; i <= m; i ++ )
	{
		cin >> a[i];
		sum += a[i];
	}
	int l = 0, r = sum;
	int ans;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (check(mid))
		{
			l = mid + 1;
			
		}
		else
		{
			r = mid - 1;
			ans = mid;
		}
	}
	cout << ans << endl;
	return 0;
}
