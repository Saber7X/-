#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1015;

int v[N], w[N], f[N];

signed main()
{
	int t, n, m; 
	scanf("%lld", &t);
	
	for (int xx = 1; xx <= t; xx ++ )
	{
		memset(f, 0, sizeof(f));
		memset(v, 0, sizeof(v));
		memset(w, 0, sizeof(w) );
		scanf("%lld%lld", &n, &m);
		for (int i = 1; i <= n; i ++ ) scanf("%lld", &w[i]);
		
		for (int i = 1; i <= n; i ++ ) scanf("%lld", &v[i]);
		
		
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = m; j >= w[i]; j -- )
			{
				f[j] = max(f[j - w[i]] + v[i], f[j]);
			}
		}
		printf("%lld\n", f[m]);
	}
	return 0;
}


