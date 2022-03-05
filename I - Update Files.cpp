#include<bits/stdc++.h>
#define int long long
using namespace std;
int p[2000]={0};

signed main()
{p[0] = 1;
	int i = 1;
	while (1)
	{
		
		p[i] = p[i - 1] * 2;
		if (p[i] > (int)1e18) break;
//		cout << p[i] << endl;
		i++;
	}
	int t; cin >> t;
	while (t -- )
	{
		int n, k; cin >> n >> k;
		int f = lower_bound(p, p + i, k) - p;
		int ans = p[f];
//		cout << ans << endl;
		if (ans >= n) cout << f << endl;
		else
		{
			
			int sum = n - ans;
			f += (sum / k);
			if (sum % k != 0) f ++;
			cout << f << endl;
		}
		
	}
	return 0;
}
