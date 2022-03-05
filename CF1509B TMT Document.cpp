#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		string s; cin >> s;
		bool flag = false;
		int a = 0, b = 0;
		for (int i = 0; i < s.length(); i ++ )
		{
			if (s[i] == 'T') a ++;
			if (s[i] == 'M') b ++;
			if (a < b)
			{
				flag = true;
				break;
			}
		}
		if (a != b * 2) flag = true;
//		
		a = 0, b = 0;
//		
		for (int i = s.length() - 1; i >= 0; i -- )
		{
			if (s[i] == 'T') a ++;
			if (s[i] == 'M') b ++;
			if (b > a) 
			{
				flag = true;
				break;
			}
		}
		if (!flag) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
