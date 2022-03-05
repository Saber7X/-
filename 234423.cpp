#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2005;
int n, a[N];
unordered_map<int, int> m;
bool check(int x)
{
	m.clear();
	if (x == 0)
	{
		for (int i = 1; i <= n; i ++ )
		{
			m[a[i]] ++;
			if (m[a[i]] > 1)
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		for (int i = 1; i <= n - x + 1; i ++ )
		{
			m.clear();
			bool ff = 0;
			int l = i, r = i + x - 1;
			for (int j = 1; j < l; j ++ )
			{
				m[a[j]] ++;
				if (m[a[j]] > 1)
				{
					ff = 1;
					break;
				}
				
			}
			for (int j = r + 1; j <= n; j ++ )
			{
				m[a[j]] ++;
				if (m[a[j]] > 1)
				{
					ff = 1;
					break;
				}
			}
			if (!ff)
			{
				return true;
			}
		}
		return false;
	}
}
 
signed main()
{
	cin >> n;
	for (int i= 1;i <= n; i ++ )
	{
		scanf("%lld", &a[i]);
	}
	int l = 0, r = n;
	while (l < r)
	{
		int mid = (l + r) / 2;
		if (check(mid)) r = mid;
		else l = mid + 1;
	}
	cout << l << endl;
	return 0;
}
