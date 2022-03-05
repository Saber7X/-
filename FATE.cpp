#include<bits/stdc++.h>
using namespace std;
const int N = 200;
int v[N], w[N], f[N][N];

int main()
{
	int n, m, s, k;
	while (cin >> n >> m >> k >> s)
	{
		memset(f, 0, sizeof f);
		memset(v, 0, sizeof v);
		memset(w, 0, sizeof w);
		for (int i = 1; i <= k; i ++ )
		{
			cin >> v[i] >> w[i];
		}
		for (int kk = 1; kk <= k; kk ++ ) //怪物的种数 
		{
			for (int i = 1; i <= s; i ++ ) //可以杀的怪物 
			{
				for (int j = 0; j <= m; j ++ ) //耐久度 
				{
					if (j >= w[kk])
					{
						f[i][j] = max(f[i - 1][j - w[kk]] + v[kk], f[i][j]);
					}
				}
			}
		}
		bool ff = 0;
		for (int i = 0; i <= m; i ++ )
		{
			if (f[s][i] >= n)
			{
				ff = 1;
				cout << m - i << endl;
				break;
			}
//			cout << f[s][i] << " ";
		}
		if (!ff) cout << "-1" << endl;
	}
	return 0;
}
