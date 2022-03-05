#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int x, n;
	cin >> x >> n;
	int sum = 1;
	for (int i = 1; i <= n; i ++ )
	{
		sum += (sum * x);
	}
	cout << sum << endl;
	return 0;
}
