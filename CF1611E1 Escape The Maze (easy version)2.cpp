#include<bits/stdc++.h> 
using namespace std;
const int N = 2e5 + 10;
map<int, int> pp;
vector<int> g[N];
int d1[N];
bool safe[N];
int d[N];
vector<int> ff;
bool st[N];
bool st1[N];
void dfs(int u)
{
	st[u] = 1;
	for (int i = 0; i < g[u].size(); i ++ )
	{
		int j = g[u][i];
		d[j] = min(d[i] + 1, d[j]);
		if (!st[j]) dfs(j);
	}
	return;
}

void dfs1(int u, int fa)
{
	d1[u] = min(d1[u], d1[fa] + 1);
	st[u] = 1;
	for (int i = 0; i < g[u].size(); i ++ )
	{
		int j = g[u][i];
		if (pp[j] == 1) continue;
		if (!st[j])
		{
			dfs1(j, i);
			if (d[j] > d1[j]) safe[j] = true;
		}
	}
	if(d[u] > d1[u]) safe[u] = true;
	return;
}

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, m; cin >> n >> m;
		for (int i = 1; i <= m; i ++ )
		{
			int x; cin >> x;
			ff.push_back(x);
			pp[x] = 1;
		}
		for (int i = 1; i < n; i ++ )
		{
			int u, v;cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		for (int i = 0; i < ff.size(); i ++ )
		{
			memset(st, 0, sizeof st);
			d[i] = 0;
			dfs(i);
		}
		memset(d, 0x3f3f3f3f, sizeof d);
		memset(d1, 0x3f3f3f3f, sizeof d1);
		d1[0] = -1;
		dfs1(1, 0);
		if (safe[1]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
