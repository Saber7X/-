#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
string s;
int main()
{
	int l, r;
	cin >> l >> r;
	cin >> s;
	reverse(s.begin() + l - 1, s.begin() + r);
	cout << s << endl;
	return 0;
}
