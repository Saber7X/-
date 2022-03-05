#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n;
	cin >> n;
	map<int, int> ma;
	for (int i = 1; i <= n; i ++ )
	{
		int x;
		cin >> x;
		ma[x] ++;
	}
	int sum = 0;
	for (int i = 0; i <= 1000; i ++ )
	{
		for (int j = i; j <= 1000; j ++ ) 
		{
			int add;
			if (i == j) add = (1 + ma[i]) * ma[i] / 2;
			else add = ma[i] * ma[j];
			sum += abs(i + j - 1000) * add;
		}
	}
	cout << sum << endl;
	return 0;
}
