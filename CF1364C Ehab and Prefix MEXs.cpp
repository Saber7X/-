#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
map<int, int> ma;
int main()
{
	int n;
	cin >> n;
	bool f = 0;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
		ma[a[i]] = 1;
		if (a[i] < a[i - 1] || a[i] > i)
		{
			f= 1;
		}
	}
	if (f) cout << -1 << endl;
	else
	{
		vector<int> v;
		for (int i = 1; i <= n * 2; i ++ )
		{
			if (!ma[i]) v.push_back(i);
		}
		int c = 0;
		
		for (int i = 1; i <= n; i ++ )
		{
			if (a[i] == a[i - 1]) cout << v[c ++ ] << " ";
			else cout << a[i - 1] << " ";
		}
	}
	return 0;
}
