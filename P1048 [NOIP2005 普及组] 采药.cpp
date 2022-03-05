#include<bits/stdc++.h>
using namespace std;
const int N = 1010;
int T, m, f[N];
int main()
{
	cin >> T >> m;
	for(int i = 1; i <= m; i ++)
	{
		int t, w;
		cin >> t >> w;
		for(int j = T; j >= t; j --)
		{
			f[j] = max(f[j], f[j - t] + w);
		}
	}
	cout << f[T] << endl;
	return 0;
}
