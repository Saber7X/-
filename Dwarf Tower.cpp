//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//const int N = 1e6 + 10;
//queue<int> q;
//struct node{
//	int x;
//	int y;
//}num[N * 2];
//int n, m;
//int d[N * 2];
//bool st[N * 2];
//
//void spfa()
//{
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop();
//		st[t] = 0;
//		int u = num[t].x, v = num[t].y;
//		if (d[t] > d[u] + d[v])
//		{
//			d[t] = d[u] + d[v];
//			if (!st[t]) q.push(t);
//		}
//	}
//}
//
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i ++ )
//	{
//		cin >> d[i];
//		
//	}
//	for (int i = 1; i <= m; i ++ )
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		num[a] = {b, c};
//		q.push(a);
//		st[a] = 1;
//	}
//	spfa();
//	cout << d[1];
//	return 0;
//}

#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int N = 2e6 + 10;
int d[N];
int h[N], e[N], ne[N], w[N], idx;
void add(int a, int b, int c)
{
	e[idx] = b;
	w[idx] = c;
	ne[idx] = h[a];
	h[a] = idx ++;
}
bool st[N];
queue<int> q;
void spfa()
{
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		st[t] = 0;
		
		for (int i = h[t]; i != -1; i = ne[i])
		{
			int j = e[i];
			if (d[j] > d[t] + d[w[i]])
			{
				d[j] = d[t]  + d[w[i]];
				if (!st[j]) 
				{
					q.push(j);
					st[j] = 1;
				}
			}
		}
	}
}
signed main()
{
	freopen("dwarf.in", "r", stdin);
	freopen("dwarf.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	memset(h, -1, sizeof h);
	for (int i = 1; i <= n; i ++ )	scanf("%d", &d[i]);
	
	for (int i = 1; i <= m; i ++ )
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		add(c, a, b);
		add(b, a, c);
		
	}
	for (int i = 1; i <= n; i ++ )
	{
		q.push(i);
		st[i] = 1;
	}
	spfa();
	
	cout << d[1];
	return 0;
}
