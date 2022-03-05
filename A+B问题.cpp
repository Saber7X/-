#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	string a, b;
	cin >> k >> a >> b;
	int x = a.length(), y = b.length();
	int f = 0;
	string s = "";
	for (int i = max(x, y) - 1; i >= 0; i -- )
	{
		x --;
		y --;
		int aa = a[x] - '0';
		int bb = b[y] - '0';
		if (x < 0) aa = 0;
		if (y < 0) bb = 0;
		int ans = (aa + bb + f) % k;
		f = (aa + bb + f) / k;
		s.push_back((ans + '0'));
	}
	if (f != 0) s.push_back((f + '0'));
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}
