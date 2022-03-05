#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		string s;
		cin >> s;
		int m = -1;
		string maxn = "";
		bool f = 0;
		for (int i = s.length() - 1; i >= 1; i -- )
		{
			int a = s[i] - '0';
			int b = s[i - 1] - '0';
			int c = a + b;
			if (c >= 10)
			{
				string ss = to_string(c);
				string ans = s.substr(0, i - 1) + ss + s.substr(i + 1);
				cout << ans << endl;
				f = 1;
				break;
			}
		}
		if (!f)
		{
			int c = (s[0] - '0') + (s[1] -'0');
			string ans = to_string(c) + s.substr(2);
			cout << ans << endl;
		}
	}
	return 0;
}
