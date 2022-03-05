//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//
//int n, k;
//
//int f[N]; //标记哪些点是朋友节点 
//int safe[N]; //看该点是否安全 
//int deep[N]; // 第 i 个点的深度 
//int md[N]; //距离最近的朋友节点的深度 
//
//int h[N], ne[N], e[N], idx;
//
//void add(int a, int b)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx ++;
//}
//
//void dfs(int u, int fa)
//{
//	deep[u] = deep[fa] + 1;
//	if (f[u] == 1) // 如果是朋友节点
//	{
//		md[u] = min(md[u], deep[u]);
//		return;
//	} 
//	
//	if (h[u] == -1 && u != 1)//到达叶子节点 
//	{
//		safe[u] = 1; //标为安全点
//		return; 
//	}
//	int ifsafe = 0, mn = 0x3f3f3f3f;
//	for (int i = h[u]; i != -1; i = ne[i])
//	{
//		int v = e[i];
//		if (v == fa) continue;
//		dfs(v, u);
//		md[u] = min(md[u], md[v]);
//		if (safe[v]) ifsafe = 1;
//	}
//	if (ifsafe && deep[u] - 1 < md[u] - deep[u]) safe[u] = 1;
//}
//
//int main()
//{
//	int t; cin >> t;
//	while (t -- ) 
//	{
//		cin >> n >> k;
//		idx = 0;
//		memset(h, -1, sizeof h);
//		memset(e, 0, sizeof e);
//		memset(ne, 0, sizeof ne);
//		memset(safe, 0, sizeof safe);
//		for (int i = 1; i <= k; i ++ ) 
//		{
//			int x; scanf("%d", &x);
//			f[x] = 1;
//		}
//		
//		for (int i = 1; i < n; i ++ )
//		{
//			int u, v; scanf("%d%d", &u, &v);
//			add(u, v);
//			add(v, u);
//		}
//		
//		dfs(1, 0);
//		
//		if (safe[1]) printf("YES\n");
//		else printf("NO\n");
//		
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;
const int N = 2e5 + 10;
const int M = 1e6 + 10;
 
int n, k;
int f[N], safe[N], deep[N], md[N];
vector<int> g[N];
 
void dfs(int u, int fa)
{
    deep[u] = deep[fa] + 1;
    
    if(f[u]) //如果当前节点是朋友点 
    {
        md[u] = min(md[u], deep[u]); //距离朋友点最近的朋友点应该是它本身 
        return;
    }
    
    if(g[u].size() == 1 && u != 1) //如果不是根节点同时没有下一个节点了 
    {
        safe[u] = 1; //标记为安全点 
        return;
    }
    
    int ifsafe = 0, mn = INF;
    
    for (int i=0, v; i < g[u].size(); i ++ ) // 枚举 u点下面的所有点 
    {
        v = g[u][i]; //取出点 
        if(v == fa) continue; //因为存的是无向图，不能把父节点算进去
		 
        dfs(v, u); //继续走下一个点 
        md[u] = min(md[u], md[v]); //距离u点最近的朋友点的距离 
        if(safe[v]) ifsafe = 1; //如果是安全点 
    }
    
    if(ifsafe && deep[u] - 1 < md[u] - deep[u]) safe[u] = 1; // 如果有子节点为安全点
}
 
int main()
{
    int T = 1;
    scanf("%d",&T);
    while (T -- )
    {
        scanf("%d%d", &n, &k);
        for(int i=0; i<=n; i++) g[i].clear(), f[i] = deep[i] = safe[i] = 0, md[i] = INF;
        
        for(int i=1,x;i<=k;i++)
        {
            scanf("%d",&x);
            f[x] = 1;
        }
        
        for(int i=1,u,v;i<n;i++)
        {
            scanf("%d%d",&u,&v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
        
        dfs(1, 0);
        if(safe[1]) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

