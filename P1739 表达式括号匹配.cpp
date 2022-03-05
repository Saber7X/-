#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int l = 0, r= 0;
	for (int i = 0; i < s.length(); i ++ )
	{
		if (s[i] == '(') l ++;
		if (s[i] == ')') r ++;
		if (r > l)
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	if (l != r) cout << "NO";
	else cout << "YES" << endl;
	return 0;
}
