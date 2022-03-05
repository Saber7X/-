#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int n; cin >> n;
	int ans = 0;
	for (int i = 1; i * i * i <= n; i ++ )
	{
		for (int j = i; j <= 1000000000; j ++ )
		{
			
			if (n / i / j >= j)
			{
				ans = ans + (n / i / j - j + 1);
			}
			else
			{
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
