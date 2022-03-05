#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int a, b, d;
	cin >> a >> b >> d;
	int sum = a + b;
	string ans = "";
	while (sum > 0)
	{
		ans += (sum % d + '0');
		sum /= d;
	}
	reverse(ans.begin(), ans.end());
	bool f = 0;
	for (int i = 0; i < ans.length(); i ++ )
	{
		if (ans[i] == '0' && !f)continue;
		cout << ans[i];
		f = 1;
	}
	if (sum == 0 && !f) cout << "0" ;
	return 0;
}
