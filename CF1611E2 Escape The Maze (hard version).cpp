#include<bits/stdc++.h> 
using namespace std;
const int N = 2e5 + 10;

vector<int> g[N];
int md[N];// ��¼���뵱ǰ����������ѽڵ����� 
int f[N]; //������ѵ�
int deep[N]; //��� 
int n, m;  
bool safe[N]; //����Ƿ�ȫ 

int ans = 0;
void init() //��ʼ�� 
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
	deep[u] = deep[fa] + 1;//���¾��룬��Ϊ�Ǵ�1��ʼ���������涼Ҫ��һ 
	
	if (f[u]) //�����ѵ� 
	{
		md[u] = deep[u];//������������ѵ㵽���ľ��룬���������������ѵ㣬��ô������������ѵ����Ⱦ��������� 
		return;//��Ϊ���ѵ�����Ŀ϶������ǰ�ȫ�㣬û�б�Ҫ�����ߣ��ͷ��� 
	}
	
	if (g[u].size() == 1 && u != 1) //��Ҷ�ӽڵ㣬��Ϊ������ͼ������ÿ���㶼������һ�����ڵ㣬������1�����������ֻ�и��ڵ㣬��ô������Ҷ�ӽڵ� 
	{
		safe[u] = 1;//Ҷ�ӽڵ�϶��ǰ�ȫ�� 
		return;//û����һ�������Է��� 
	} 
	
	bool ifsafe = 0;//����һ����¼״̬��ֻҪ��ǰ��������һ����ȫ�㣬��ô������true��Ҳ��˵��������п����ǰ�ȫ�� 
	for (int i = 0; i < g[u].size(); i ++ ) //��ʼ���� 
	{
		int j = g[u][i]; //ȡ���� 
		if (j == fa) continue; //��ֹ�߻ظ��ڵ㣬������ѭ�� 
		dfs(j, u); //������һ�������һ����ĸ��ڵ� 
		md[u] = min(md[u], md[j]); //����������ĵ㴫��������Сֵ��ÿ���㶼�ᴫ����һ�Σ���������ȡ���������з�֧�о�������������ѵ����� 
		if (safe[j]) ifsafe = 1; //һ����һ���ǰ�ȫ�� 
	}
	if (ifsafe && deep[u] - 1 < md[u] - deep[u]) safe[u] = 1; //��������а�ȫ�㣬�ҴӸ��ڵ㵽�õ����С����õ���������ѵ㵽�õ�ľ��룬��ô�����Ҳ�ǰ�ȫ�� 
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
		
		if (safe[1]) cout << "-1" << endl;//û�����ѿ���ʹ����ʧ�� 
		else 
		{
			dfs2(1, 0);
			cout << ans << endl;
		}
	}
	
	return 0;
}

