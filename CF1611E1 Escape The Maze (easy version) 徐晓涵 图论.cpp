#include<bits/stdc++.h> 
using namespace std;
const int N = 1e5 + 10;

int n, k; 
int f[N];//������ѵ�
int safe[N];//��ǰ�ȫ��
int deep[N];//��¼ÿ��������+1
int md[N]; //��¼ 
vector<int> g[N];

void dfs(int u, int fa)
{
	deep[u] = deep[fa] + 1;//���¾��� 
	if (f[u]) //����ߵ������ѽڵ� 
}

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, k; cin >> n >> k;
		
		//��ʼ�� 
		for (int i= 0; i <= n; i ++ ) g[i].clear(), f[i] = deep[i] = safe[i] = 0, md[i] = 0x3f3f3f3f;
		
		for (int i = 1, x; i <= k; i ++ )
		{
			cin >> x;
			f[x] = 1;//���Ϊ���ѵ� 
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
