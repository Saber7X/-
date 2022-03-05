#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int x, s, ans = 0;
	cin >> x >> s;
	int aa = min(x, s);
	for(int i = 0; i <= aa; i ++ )
	{
		int flag = x|i;
		if( flag == s)
		{
			//cout << i << endl;
			ans ++;
		}
	}
	cout << ans << endl;
	return 0;
}
