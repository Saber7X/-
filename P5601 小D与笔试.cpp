#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n, q;
	cin >> n >> q;
	map<string, string> ma;
	for (int i = 1; i <= n; i ++ )
	{
		string a, b; cin >> a >> b;
		ma[a] = b;
	}
	for (int i = 1; i <= q; i ++ )
	{
		string a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		if (b == ma[a]) cout << "A" << endl;
		if (c == ma[a]) cout << "B" << endl;
		if (d == ma[a]) cout << "C" << endl;
		if (e == ma[a]) cout << "D" << endl;
	}
	return 0;
}
