#include<bits/stdc++.h> 
using namespace std;
const int N = 1e5 + 10;

int n, k; 
int f[N];//标记朋友点
int safe[N];//标记安全点
int deep[N];//记录每个点的深度+1
int md[N]; //记录 
vector<int> g[N];

void dfs(int u, int fa)
{
	deep[u] = deep[fa] + 1;//更新距离 
	if (f[u]) //如果走到了朋友节点 
}

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, k; cin >> n >> k;
		
		//初始化 
		for (int i= 0; i <= n; i ++ ) g[i].clear(), f[i] = deep[i] = safe[i] = 0, md[i] = 0x3f3f3f3f;
		
		for (int i = 1, x; i <= k; i ++ )
		{
			cin >> x;
			f[x] = 1;//标记为朋友点 
		}
		for (int i = 1, u, v; i < n; i ++ ) 
		{
			int u, v; cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		dfs(1, 0);
		if (safe[1]) printf("YES\n");
		else printf("NO\n");  
	}
	return 0;
}
