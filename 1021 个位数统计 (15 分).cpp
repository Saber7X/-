#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	map<char, int> ma;
	for (int i = 0; i < s.length(); i ++ )
	{
		ma[s[i]] ++;
	}
	int f = 0;
	for (auto i : ma)
	{
		if (f) cout << endl;
		f = 1;
		cout << i.first << ":" << i.second;
	}
	return 0;
}
