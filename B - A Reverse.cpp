#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l, r;
	string s;
	cin >> l >> r >> s;
	string ss = s.substr(l, r - l + 1);
	reverse(ss.begin(), ss.end());
	string ans = s.substr(0, l) + ss  + s.substr(r + 1);
	cout << ans << endl;
	return 0;
}
