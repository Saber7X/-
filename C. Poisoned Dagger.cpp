#include<bits/stdc++.h> 
#define int long long
using namespace std;

const int N = 150;

int n, m;
int a[N];

bool check(int x)
{
	int sum = 0;
	for (int i = 1; i < n; i ++ )
	{
		sum += min(x, a[i + 1] - a[i]);
	}
	sum += x;//还有最后一个没有差值的需要加上去 
	return sum >= m;
}

signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		cin >> n >> m;
		for (int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
		}
		int l = 0, r = m;
		int ans = 0;
		while (l <= r) //+1。-1的话这边就要 <= 
		{
			int mid = (l + r) / 2;
			if (check(mid))
			{
				r = mid - 1;
				ans = mid;
			}
			else
			{
				l = mid + 1;
				
			}
		}
		cout << ans << endl;
	}
	return 0;
}
