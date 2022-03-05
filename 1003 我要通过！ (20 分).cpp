#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	getchar();
	while (t -- )
	{
		string s;
		getline(cin, s);
		char ju[3] = {'P', 'A', 'T'};
		int j = 0;
		unordered_map<char, int> ma;
		int a = 0, b = 0, c = 0;
		for (int i = 0; i < s.length(); i ++ )
		{
			if (j == 0 && s[i] == 'A') a ++;
			if ((j == 1 || j == 2) && s[i] == 'A') b ++;
			if (j == 3 && s[i] == 'A')c ++;
			if (s[i] != 'P' && s[i] != 'A' && s[i] != 'T')
			{
				j = 100;
				break;
			}
			ma[s[i]] ++;
//			cout << s[i] << " " << ma[s[i]] << endl;
			if (ma[s[i]] > 1 && s[i] != 'A')
			{
				j = 100;
				break;
			}
			
			if (s[i] == ju[j]) j ++;
		}
		if ((b == 1 && a == c)|| (a >= c))
		{
			
		}
		else j = 100;
		
		if (j == 3) cout << "           "<< "YES" << endl;
		else cout << "          " << "NO" << endl;
	}
	return 0;
}
