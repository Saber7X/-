#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e4 + 100;

int f[N], v[N], w[N];

signed main()
{
	
	int t; cin >> t;
	while (t -- )
	{
		memset(f, 0, sizeof(f));
        memset(v, 0, sizeof(v));
        memset(w, 0, sizeof(w));
        
		int n, m; cin >> n >> m;
		
		for (int i = 1; i <= n; i ++) cin >> w[i];
		for (int i = 1; i <= n; i ++ ) cin >> v[i];
		
		for (int i =1; i <= n; i ++ )
		{
			for (int j = m; j >= v[i]; j -- )
			{
				f[j] = max(f[j], f[j - v[i]] + w[i]);
			}
		}
		cout << f[m] << endl;
	}
}
