#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int a, b; cin >> a >> b;
		int ans = 0;
		for (int i = 1; i <= a; i ++ )
		{
			ans = ans + i * i * b; 
		}
		cout << ans << endl;
		
	}
	return 0;
}
