#include<bits/stdc++.h>
#define int long long
using namespace std;
map <int, int> res;
map <int, int> res2;
signed main()
{
	int n, m;
	
	cin >> n >> m;
	for(int i = 1; i <= m; i ++ )
	{
		int a, b;
		cin >> a >> b;
		res[a] ++;
		res2[b] ++;
	}
	int ans = 0;
	for(int i = 1; i <= n; i ++ )
	{
		if( res2[i] == 0 )
		{
			ans ++;
		}
	}
	cout << ans;
	return 0;
}
