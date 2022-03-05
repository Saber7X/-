#include<bits/stdc++.h>
using namespace std;
const int N = 1000005;
int main()
{
	int n, x, a[N], ans;
	cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		cin >> x;
		a[x] ++;
	}
	for(int i = 1; i <= 1e6; i ++ )
	{
		for(int j = 1; j * i <= 1e6; j ++ )
		{
			ans += a[i] * a[j] * a[i * j];
		}
	}
	cout << ans;
	return 0;
}
