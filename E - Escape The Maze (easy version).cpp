#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int f[N], safe[N], deep[N], md[N];//是否朋友点, 是否安全点，点的深度，下面距离当前点最近的朋友点
int n, k;
vector<int> g[N];

void init()
{
    memset(md, 0x3f3f3f3f, sizeof md);
    memset(f, 0, sizeof f);
    memset(safe, 0, sizeof safe);
    memset(deep, 0, sizeof deep);
    for (int i = 0; i <= n; i ++ )
    {
        g[i].clear();
    }
}

void dfs(int u, int fa)
{
    deep[u] = deep[fa] + 1;
    if (f[u])
    {
        md[u] = deep[u];
        return;
    }
    if (g[u].size() == 1 && u != 1)
    {
        safe[u] = 1;
        return;
    }
    bool ifsafe = 0;
    for (int i = 0; i < (int)g[u].size(); i ++ )
    {
        int j = g[u][i];
        if (j != fa)
        {
            dfs(j, u);
            md[u] = min(md[j], md[u]);
            if (safe[j]) ifsafe = 1;
        }
    }
    if (ifsafe && deep[u] - 1 < md[u] - deep[u]) safe[u] = 1;
}

int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
	    scanf("%d%d", &n, &k);
	    init();
	    for (int i = 1; i <= k; i ++ ) 
	    {
	        int x; scanf("%d", &x);
	        f[x] = 1;
	    }
	    for (int i = 1; i < n; i ++ )
	    {
	        int a, b;
	        scanf("%d%d", &a, &b);
	        g[a].push_back(b);
	        g[b].push_back(a);
	    }
	    dfs(1, 0);
	    if (safe[1] == 1) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
