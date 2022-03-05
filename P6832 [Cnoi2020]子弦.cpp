#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	map<char, int> m;
	int ans = 0;
	for (int i = 0; i < s.length(); i ++ )
	{
		m[s[i]] ++;
		ans = max (ans, m[s[i]]);
	}
	cout << ans << endl;
	return 0;
}
