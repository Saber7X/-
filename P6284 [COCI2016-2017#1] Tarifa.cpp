#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int x, n;
	cin >> x >> n;
	x *= (n+1);
	for (int i = 1; i <= n; i ++ )
	{
		int xx; cin >> xx;
		x -= xx;
	}
	cout << x << endl;
	return 0;
}
