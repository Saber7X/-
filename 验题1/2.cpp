#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int a[N];
int b[N];
signed main()
{
	int n; cin >> n;
	int x = 0;
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%lld", &a[i]);
	}
	sort(a + 1, a + 1 + n);
	int ans = 0;
	int cnt = 1;
	for (int i = 1; i <= n / 2; i ++ )
	{
		b[cnt ++] = a[n - i + 1];
		b[cnt ++] = a[i];
	}
	if (n % 2 != 0)
	{
		b[cnt ++] = a[n / 2 + 1];
	}
	int sum = 0;
	for (int i = 1; i <= n; i ++ )
	{
//		cout << b[i] << endl;
		if (b[i] > x)
		{
			sum += (b[i] - x);
			x = b[i];
		}
		else
		{
			x = b[i];
		}
	}
	cout << sum << endl;
	return 0;
}
