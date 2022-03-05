#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10, M = 1e9 + 7;
int n, T;
int e[N * 2], ne[N * 2], h[N * 2], idx;
int sz[N], parent[N], a, b, mn;
void add(int a, int b)
{
	e[idx] = b;
	ne[a] = h[a];
	h[a] = idx ++;
}
void dfs(int x)
{
	sz[x] = 1;
	int now = 0;
	for(int i = 1; i != -1; i = ne[i])
	{
		int j = e[i];
		if(j == parent[x]) continue;
		parent[j] = x;
		dfs(j);
		sz[x] += sz[j];
		now = max(now, sz[j]);
	}
	now = max(now, n - sz[x]);
	if(now < mn) 
	{
		mn = now;
		a = x, b = 0;
	}
	else if(now == mn)
	{
		b = x;
	}
}
void dfs2(int x, int &t)
{
	if(sz[x] == 1)
	{
		t = x;
		return;
	}
	for(int i = h[x]; i != -1; i = ne[i])
	{
		int j = e[i];
		if(j == parent[x]) continue;
		dfs2(j, t);
	}
}
int main()
{
	cin >> T;
	while(T -- )
	{
		cin >> n;
		idx = a = b = 0, mn = 2e9;
		memset(h, 0, sizeof h);
		for(int i = 0; i < n - 1; i ++ )
		{
			int a, b;
			cin >> a >> b;
			add(a, b);
			add(b, a);
		}
		parent[1] = -1;
		dfs(1);
		if(b == 0)
		{
			cout << 1 << " " << e[h[1]] << endl;
			cout << 1 << " " << e[h[1]] << endl;
		}
		else
		{
			if (parent[a] != b) swap(a, b);
			int t;
			dfs2(a, t);
			cout << t << " " << parent[t] << endl;
			cout << t << " " << b << endl;
			
		}
	}
	return 0;
}
