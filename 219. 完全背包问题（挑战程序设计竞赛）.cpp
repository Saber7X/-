#include<bits/stdc++.h>
using namespace std;
const int N = 105, M = 10005;
int f[M];
int v[N], w[N];
int n, m;
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> v[i] >> w[i];
	}
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 0; j <= m; j ++ )
		{
			if (j >= v[i])
			{
				f[j] = max(f[j - v[i]] + w[i], f[j]);
			}
		}
	}
	cout << f[m] << endl;
	return 0;
}
