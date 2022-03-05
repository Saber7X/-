#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int n, m;
	cin >> n >> m;
	int a[n + 10]={0};
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 1; i <= n - m + 1; i ++ )
	{
		for (int j = i; j <= i + m - 1; j ++ )
		{
			sum += a[j];
		}
	}
	cout << sum << endl;
	return 0;
}
