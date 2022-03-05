#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 100005;
int a[N], b[N], c[N], f[N];
signed main()
{
	int t;
	cin >> t;
	while(t --)
	{
		int ans = 0;
		int n;
		cin >> n;
		for(int i = 1; i <= n; i ++ ) cin >> c[i];
		for(int i = 1; i <= n; i ++ ) cin >> a[i];
		for(int i = 1; i <= n; i ++ ) cin >> b[i];
		f[1] = 0;
		for(int i = 2; i <= n; i ++ )
		{
			if(a[i] == b[i]) f[i] = c[i] + 1;
			else
			{
				int flag = abs(a[i] - b[i]);
				f[i] = c[i] + 1 + max(flag, f[i - 1] - flag);
			}
			ans = max(ans, f[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
