#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];

int dfs(int v, int fa, int c)
{
	int sum;
	if (c >= 1)
	{
		sum = 1;
	}
	else
	{
		sum = 0;
	}
	
	for (int i = 0; i < g[v].size(); i ++ )
	{
		int j  = g[v][i];
		if (j == fa) continue;
		sum += dfs(j, v, c + 1);
	}
	return sum;
}

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n;
		scanf("%d", &n);
		for (int i = 0; i <= n; i ++ ) g[i].clear();
		for (int i = 1; i <= n - 1; i ++ )
		{
			int u, v;
			scanf("%d%d", &u, &v);
			g[u].push_back(v);
			g[v].push_back(u);
		}
		int ans = 0;
		for (int i = 1; i <= n - 1; i ++ )
		{
			if (g[i].size() >= 3)
			{
				for (int j = 0; j < g[i].size(); j ++ )
				{
					int v = g[i][j];
					if (g[v].size() >= 2)
					{
						ans += dfs(v, i, 0);
					}
				}
			}
		}
		cout<< ans << endl;
	}
	return 0;
}
