#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		pair<int, int> p[5];
		for (int i = 1; i <= 3; i ++ )
		{
			int x, y;
			cin >> x >> y;
			p[i] = {y, x};
		}
		sort(p + 1, p + 1 + 3);
		if (p[2].first == p[3].first && p[2].first > p[1].first && p[3].first > p[1].first ) 
		{
			cout << abs(p[2].second - p[3].second)  << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}
	return 0;
}
