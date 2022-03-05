#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> g[N];
int n;
int col[N];
bool flag = 0;
void dfs(int u, int f)
{
	if (flag) return;
	col[u] = f;
	for (int i = 0; i < g[u].size(); i ++ )
	{
		int j = g[u][i];
		if (col[j] == 0)
		{
			dfs(j, f * -1);
		}
		if (col[j] == f)
		{
			flag = 1;
			return;
		}
		if (flag) return;
	}
	if (flag) return;
}

int main()
{
	cin >> n;int a, b; 
	while (scanf("%d%d", &a, &b) != EOF)
	{
		g[a].push_back(b) ;
		g[b].push_back(a);
	}
	dfs(0, 1);
	if (flag) cout << "No" << endl;
	else cout << "Yes" << endl;
	return 0;
}
