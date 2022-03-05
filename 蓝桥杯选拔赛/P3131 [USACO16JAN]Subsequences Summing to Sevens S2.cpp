#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 1e5 + 10;
int a[N] , sum[N];
int f[N];
int ff[N];
signed main()
{
	int n; 
	cin >> n;
	
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
		
		sum[i] = sum[i - 1] + a[i];
	}
	
	for (int i = 1; i <= n; i ++ )
	{
		sum[i] %= 7;
	}
	
	int ans = -1;
	
	for (int i = 0; i <= 6; i ++ )
	{
		int l = 0, r = 0;
		for (int j = 0; j <= n; j ++ )
		{
			if (sum[j] == i)
			{
				l = j;
				break;
			}
		}
		
		for (int j = n; j >= 1; j -- )
		{
			if (sum[j] == i)
			{
				r = j;
				break;
			}
		}
		ans = max(ans, r - l);
	}
	cout << ans << endl;
	return 0;
}
