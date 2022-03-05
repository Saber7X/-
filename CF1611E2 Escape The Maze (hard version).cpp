#include<bits/stdc++.h> 
using namespace std;
const int N = 2e5 + 10;

vector<int> g[N];
int md[N];// 记录距离当前点最近的朋友节点的深度 
int f[N]; //标记朋友点
int deep[N]; //深度 
int n, m;  
bool safe[N]; //标记是否安全 

int ans = 0;
void init() //初始化 
{
	ans = 0;
	memset(md, 0x3f3f3f3f, sizeof md);
	memset(safe, 0, sizeof safe);
	memset(f, 0, sizeof f);
	memset(deep, 0, sizeof deep);
	for (int i = 0; i <= n; i ++ ) 
	{
		g[i].clear();
	}
}

void dfs(int u, int fa)
{
	deep[u] = deep[fa] + 1;//更新距离，因为是从1开始的所以下面都要减一 
	
	if (f[u]) //是朋友点 
	{
		md[u] = deep[u];//更新最近的朋友点到它的距离，如果它本身就是朋友点，那么离它最近的朋友点的深度就是它本身 
		return;//因为朋友点下面的肯定都不是安全点，没有必要继续走，就返回 
	}
	
	if (g[u].size() == 1 && u != 1) //是叶子节点，因为是无向图，所以每个点都至少有一个父节点，所以是1，所以如果它只有父节点，那么它就是叶子节点 
	{
		safe[u] = 1;//叶子节点肯定是安全点 
		return;//没有下一个了所以返回 
	} 
	
	bool ifsafe = 0;//定义一个记录状态，只要当前点下面有一个安全点，那么它就是true，也就说明这个点有可能是安全点 
	for (int i = 0; i < g[u].size(); i ++ ) //开始深搜 
	{
		int j = g[u][i]; //取出点 
		if (j == fa) continue; //防止走回父节点，导致死循环 
		dfs(j, u); //传入下一个点和下一个点的父节点 
		md[u] = min(md[u], md[j]); //更新由下面的点传上来的最小值，每个点都会传上来一次，所以最终取到的是所有分支中距离它最近的朋友点的深度 
		if (safe[j]) ifsafe = 1; //一旦有一个是安全点 
	}
	if (ifsafe && deep[u] - 1 < md[u] - deep[u]) safe[u] = 1; //如果下面有安全点，且从根节点到该点距离小于离该点最近的朋友点到该点的距离，那么这个点也是安全点 
}



void dfs2(int u, int fa)
{
	if (deep[u] - 1 >= md[u] - deep[u])
	{
		ans ++;
		return;
	}
	for (int i = 0; i < g[u].size(); i ++ )
	{
		int j = g[u][i];
		if (j == fa) continue;
		dfs2(j, u);
	}
}

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		
		cin >> n >> m;
		
		init(); 
		
		for (int i = 1; i <= m; i ++ )
		{
			int x; 
			cin >> x;
			f[x] = 1;
		}
		
		for (int i = 1; i <= n - 1; i ++ )
		{
			int u, v; 
			cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		
		dfs(1, 0);
		
		if (safe[1]) cout << "-1" << endl;//没有朋友可以使主角失败 
		else 
		{
			dfs2(1, 0);
			cout << ans << endl;
		}
	}
	
	return 0;
}

