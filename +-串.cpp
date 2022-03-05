#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		string s; cin >> s;
		int k; cin >> k;
		int cnt = 0;
		for (int i = 0; i < s.length(); i ++ ) 
		{
			if (s[i] == '+') cnt ++;
		}
		if (k == cnt)
		{
			int len = s.length();
			cout << 0 -  len << endl;
		}
		else if (k < cnt)
		{
//			cout << cnt - k - (s.length() - (cnt - k)) << endl;
		}
		else
		{
			k -= cnt;
			int ans = 0 - s.length();
			if (k % 2 != 0) ans ++;
			cout << ans << endl;
		}
	}
	return 0;
}
