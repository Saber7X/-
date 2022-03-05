#include <bits/stdc++.h> 
using namespace std;
const int N = 1e4 + 10;
int a[N];
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		int ans = 0x3f3f3f3f;
		for (int i = 1; i <= n; i ++ ) cin >> a[i];
		for (int i = 1; i <= n; i ++ )
		{
			int sum = a[i];
			for (int j = i; j <= n; j ++ )
			{
				sum &= a[j];
				ans = min(ans, sum);
			}
		}
		cout<< ans << endl;
	}
	return 0;
}
