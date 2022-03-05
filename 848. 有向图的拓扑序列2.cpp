#include<bits/stdc++.h>
using namespace std;
const int N = 100010;

int n, m;
vector<int> g[N];
queue<int> q;
int d[N];
priority_queue<int, vector<int>, greater<int>> qq;
vector<int> ans;
bool topsort()
{
	int cnt = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (!d[i]) 
		{
			cnt ++; 
			qq.push(i);
			q.push(i);
		}
	}
	while(!qq.empty())
	{
		ans.push_back(qq.top());
		qq.pop();
	}
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		for (int i = 0; i < g[t].size(); i ++ )
		{
			int j = g[t][i];
			d[j] --;
			if (d[j] == 0)
			{
				q.push(j);
				qq.push(j);
				cnt ++;
			}
		}
		while(!qq.empty())
		{
			ans.push_back(qq.top());
			qq.pop();
		}
	}
	return ans.size() == n;
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= m; i ++ )
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		d[v] ++;
	}
	if (topsort()) for (int i = 0; i < ans.size(); i ++ ) cout << ans[i] << " ";
	else cout << "No" << endl;
	return 0;
}
