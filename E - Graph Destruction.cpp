//#include<bits/stdc++.h>
//using namespace std;
//const int N = 2e5 + 10;
//vector<int> g[N];
//map<int, int> flag;
//int main()
//{
//	int n, m; cin >> n >> m;
//	for (int i = 1; i <= m; i ++ )
//	{
//		int u, v; scanf("%d%d", &u, &v);
//		g[u].push_back(v);
//		g[v].push_back(u);
//		flag[u] ++;
//		flag[v] ++;
//	}
//	int ans = 1;
//	for (int i = 1; i <= n; i ++ )
//	{
//		ans += (flag[i] - 1);
//		printf("%d\n", ans);
//		for (int j = 0; j < g[i].size(); j ++ )
//		{
//			int k = g[i][j];
//			flag[k] --;
//		}
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
bool st1[N], st2[N];

void dfs (int u)
{
	st1[u] = 1;
	for (int i = 0; i < g[u].size(); i ++ )
	{
		int j = g[u][i];
		if (!st1[j] && !st2[j])
		{
			dfs(j);
		}
		else
		{
			
		}
	}
}
int main()
{
	
	return 0;
}
