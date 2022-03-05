#include<bits/stdc++.h> 
using namespace std;
const int N = 5e5 + 10;
vector<int> g[N];
int a[N];
int b[N];
bool st[N];
int dis[N];
int n, m, k;

queue<pair<int, int>> q;

int cnt = 0;

int bfs()
{
	st[a[1]] = 1;
	dis[a[1]] = 0;
	while (!q.empty())
	{
		auto tt = q.front();
		q.pop();
		int t = tt.first;
		int fa = tt.second;
		for (int i = 0; i < g[t].size(); i ++ )
		{
			int j = g[t][i];

			if (st[j] && j != fa && dis[fa] % 2 != dis[j] % 2)
			{
				return 2;
			}
			
			if (!st[j])
			{
				q.push({j, t});
				st[j] = 1;
				dis[j] = dis[t] + 1;
			}
			
		}
	}
	return 3;
}

int main()
{
	cin >> n >> m >> k;
	for (int i = 1; i <= m; i ++ )
	{
		int u, v;
		scanf("%d %d", &u, &v);
		g[u].push_back(v);
		g[v].push_back(u);
	}
	
	for (int i = 1; i <= k; i ++ )
	{
		cin >> a[i];
		b[a[i]] = 1;
	}
	q.push({a[1], 0});
	int t = bfs();
	if (t == 2) cout << "YES";
	else
	{
		for (int i = 1; i <= k; i ++ )
		{
			if (dis[a[i]] % 2 != 0) 
			{
				cout << "NO" << endl;
				return 0;
			}
		}
		cout << "YES" << endl;
	}
	
	return 0;
}
