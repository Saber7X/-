#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	string ans = "";
	unordered_map<char, int> ma;
	for (int i = 0; i < a.length(); i ++ )
	{
		if (!ma[a[i]])
		{
			ma[a[i]] = 1;
			ans += a[i];
		}
	}
	for (int i = 0; i < b.length(); i ++ )
	{
		if (!ma[b[i]])
		{
			ma[b[i]] = 1;
			ans += b[i];
		}
	}
	cout << ans;
	return 0;
}
