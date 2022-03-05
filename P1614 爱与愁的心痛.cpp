#include<bits/stdc++.h>
using namespace std;
const int N = 3e3 + 10;
int a[N];
int main()
{
	int n, m;
	cin >> n >> m;
	int ans = 0x3f3f3f3f;
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	
	for (int i = 1; i <= n - m + 1; i ++ )
	{
		int sum = 0;
		for (int j = i; j <= i + m - 1; j ++ )
		{
			sum += a[j];
		}
		ans = min(ans, sum);
	}
	
	cout << ans << endl;
	return 0;
}
