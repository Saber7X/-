#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10, mod = 1e9 + 7 ;
int v[N], w[N], f[N], cnt[N];

int main()
{
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> v[i] >> w[i];
	}
	for (int i = 0; i <= m; i ++ ) cnt[i] = 1;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = m; j >= v[i]; j -- )
		{
			if (f[j - v[i]] + w[i] > f[j]) 
			{
				f[j] = f[j - v[i]] + w[i];
				cnt[j] = cnt[j - v[i]];
			}
			else if (f[j] == f[j - v[i]] + w[i])
			{
				cnt[j] += cnt[j - v[i]];
			}
			
		}
	}
	cout << cnt[m] << endl;
	return 0;
}
