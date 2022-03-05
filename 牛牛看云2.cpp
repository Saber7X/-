#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	set<int> s;
	unordered_map<int, int> ma;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		int x;
		cin >> x;
		ma[x] ++;
		s.insert(x);
	}
	int sum = 0;
	for (auto i : s)
	{
		for (int j : s)
		{
			
			sum = sum + abs(i + j - 1000) * (ma[i] * ma[j] );
		}
	}
	cout << sum << endl;
	return 0;
}
