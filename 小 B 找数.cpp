#include<bits/stdc++.h> 
#define int long long
using namespace std;

map<int, int> p;
map<int, int> p1;

signed main()
{
	string a, b;
	cin >> a >> b;
	
	for (int i = 0; i < a.length(); i ++ )
	{
		p[a[i] - '0'] = 1;
	}
	for (int i = 0; i < b.length(); i ++ )
	{
		p1[b[i] - '0'] = 1;
	}
	bool f = 0;
	for (int i = 0; i <= 9; i ++ )
	{
		if (p[i] != 0 && p1[i] != 0) 
		{
			f = 1;
			cout << i << " ";
		}
	}
	if (!f) cout << "-1";
	return 0;
}
