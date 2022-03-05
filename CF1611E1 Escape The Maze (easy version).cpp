//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//
//int n, k;
//
//int f[N]; //�����Щ�������ѽڵ� 
//int safe[N]; //���õ��Ƿ�ȫ 
//int deep[N]; // �� i �������� 
//int md[N]; //������������ѽڵ����� 
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
//	if (f[u] == 1) // ��������ѽڵ�
//	{
//		md[u] = min(md[u], deep[u]);
//		return;
//	} 
//	
//	if (h[u] == -1 && u != 1)//����Ҷ�ӽڵ� 
//	{
//		safe[u] = 1; //��Ϊ��ȫ��
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
    
    if(f[u]) //�����ǰ�ڵ������ѵ� 
    {
        md[u] = min(md[u], deep[u]); //�������ѵ���������ѵ�Ӧ���������� 
        return;
    }
    
    if(g[u].size() == 1 && u != 1) //������Ǹ��ڵ�ͬʱû����һ���ڵ��� 
    {
        safe[u] = 1; //���Ϊ��ȫ�� 
        return;
    }
    
    int ifsafe = 0, mn = INF;
    
    for (int i=0, v; i < g[u].size(); i ++ ) // ö�� u����������е� 
    {
        v = g[u][i]; //ȡ���� 
        if(v == fa) continue; //��Ϊ���������ͼ�����ܰѸ��ڵ����ȥ
		 
        dfs(v, u); //��������һ���� 
        md[u] = min(md[u], md[v]); //����u����������ѵ�ľ��� 
        if(safe[v]) ifsafe = 1; //����ǰ�ȫ�� 
    }
    
    if(ifsafe && deep[u] - 1 < md[u] - deep[u]) safe[u] = 1; // ������ӽڵ�Ϊ��ȫ��
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

