#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int h[N], ne[N], e[N], w[N], idx;
void add(int a, int b, int c)
{
	e[idx] = b;
	w[idx] = c;
	ne[idx] = h[a];
	h[a] = idx ++;
}

int n, m;
int d[N];
bool st[N];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

int dijkstra()
{
	memset(d, 0x3f3f3f3f, sizeof d);
	q.push({0, 1});//一号点的距离为0
	while (!q.empty()) 
	{
		auto t = q.top();
		q.pop();
		int a = t.first, b = t.second;
		if (st[b]) continue;
		for (int i = h[a]; i != -1; i = ne[i])
		{
			int j = e[i];
			d[j] = min(d[j], d[b] + w[i]);
			q.push({d[j], j});
		}
	}
	if (d[n] == 0x3f3f3f3f) return -1;
	else return d[n];
}

int main()
{
	memset(h, -1, sizeof h);
	cin >> n >> m;
	for (int i = 1; i <= m; i ++ )
	{
		int a, b, c; cin >> a >> b >> c;
		add(a, b, c);
	}
	cout << dijkstra() << endl;
	return 0;
}
