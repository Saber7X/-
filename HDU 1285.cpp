#include<bits/stdc++.h>
using namespace std;
const int N = 550;

vector<int> g[N];
vector<int> ans;
int n, m, d[N];

void topsort()
{
	queue<int> q;
	for (int i = 1; i <= n; i ++ )
	{
		if (d[i] == 0)
		{
			q.push(i);
			break;
		}
	}
	
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		d[t] = -1;
		ans.push_back(t);
		for (int i = 0; i < g[t].size(); i ++ )
		{
			int j = g[t][i];
			d[j] --;
		}
		for (int i = 1; i <= n; i ++ )
		{
			if (d[i] == 0)
			{
				q.push(i);
				break;
			}
		}
	}
	
	
}

int main()
{
	while (scanf("%d%d", &n, &m) != EOF)
	{
		
		for (int i = 1; i <= n; i ++ ) g[i].clear();//md³õÊ¼»¯ 
		ans.clear();
		memset(d, 0, sizeof d);
		
		for (int i = 1; i <= m; i ++ )
		{
			int u, v; cin >> u >> v;
			g[u].push_back(v);
			d[v] ++;
		}
		topsort();
		for (int i = 0; i < ans .size (); i ++ )
		{
			if (i!=0) cout << " ";
			cout << ans[i];
		}
		printf("\n");
	}
	
	return 0;
}
