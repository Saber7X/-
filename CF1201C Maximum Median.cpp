#include<bits/stdc++.h> 
#define int long long
using namespace std;
int n, k;
int a[2000005];

bool check(int x)
{
	int sum = 0;
	for (int i = n / 2 + 1; i <= n; i ++ )
	{
		if (a[i] >= x)
		{
			break;
		}
		sum += (x - a[i]);
	}
	return sum <= k;
}

signed main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%lld", &a[i]);
	}
	sort(a + 1, a + 1 + n);
	int l = 1; int r = 2000000000;
	while (l < r)
	{
		int mid = (l + r + 1) / 2;
		if (check(mid))
		{
			l = mid;
		}
		else
		{
			r = mid - 1;
		}
	}
	cout << r << endl;
	return 0;
}
