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
		string ss = s;
		sort(ss.begin(), ss.end());
//		if (s[0] == '1') cout << "0" << endl;
		if (ss[0] == '0' && ss[s.length() - 1] == '0') 
		{
			cout << "1" << endl;
			continue;
		}
		else if (ss[0] == '1' && ss[s.length() - 1] == '1') 
		{
			cout << "0" << endl;
			continue;
		}
		int a = 0, b = 0;
		s += "2";
		for (int i = 0; i < s.length() - 1; i ++ )
		{
			if (s[i] != s[i + 1] && s[i] == '0')
			{
				a ++;
			}
			else if (s[i] != s[i + 1] && s[i] == '1')
			{
				b ++;
			}
			if (a > 1) break;
		}
		if (a == 1) cout << 1 << endl;
		else cout << 2 << endl;
//		else if (s[0] == '0' && s[s.length() - 1] == '1') cout << "2" << endl;
	}
	return 0;
}
