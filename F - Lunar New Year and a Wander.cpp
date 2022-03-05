#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool st[N];

void bfs()
{
	priority_queue<int, vector<int>, greater<int> > q;
	int a;
	q.push(1);
	while(!q.empty())
	{
		a = q.top();
		q.pop();
		if(!st[a])
		{
			cout << a << " ";
			st[a] = true;
			for(int i = 0; i < g[a].size(); i ++ )
			{
				q.push(g[a][i]);
			}
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; i ++ )
	{
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	bfs();
	return 0;
}
