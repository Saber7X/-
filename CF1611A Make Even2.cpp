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
		
		int len = s.length();
		
		if ( (s[len - 1] - '0') % 2 == 0) cout << "0" << endl;
		else if ( (s[0] - '0') % 2 == 0) cout << "1" << endl;
		else
		{
			bool f = 0;
			for (int i= 0; i < s.length(); i ++ )
			{
				if ( (s[i] - '0') % 2 == 0)
				{
					f = 1;
					break;
				}
			}
			if (f) cout << 2 << endl;
			else cout << -1 << endl;
		}
	}
	return 0;
}
