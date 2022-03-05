#include<bits/stdc++.h> //https://zhuanlan.zhihu.com/p/347222508
using namespace std;
const int N = 510;
int n, m;
int dist[N], g[N][N];
bool st[N];
int prim()
{
	int res = 0;
	memset(dist, 0x3f, sizeof dist);
	for(int i = 0; i < n; i ++ )//迭代n次 
	{
		int t = -1;//找点 
		for(int j = 1; j <= n; j ++ )
		{
			if(!st[j] && (t == -1 || dist[t] > dist[j]))
			{
				t = j;
			}
		} 
		if(i && dist[t] == 0x3f3f3f3f ) return 0x3f3f3f3f;//i应该是i！=1的意思 
		if(i) res += dist[t];
		for(int j = 1; j <= n; j ++ )
		{
			dist[j] = min(dist[j], g[t][j]);
		}
		st[t] = true;
	}
	return res;
}
int main()
{
	cin >> n >> m;
	memset(g, 0x3f, sizeof g);
	while (m -- )
	{
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = g[b][a] = min(g[a][b], c);
	}
	int ans = prim();
	if(ans == 0x3f3f3f3f)
	{
		cout << "impossible";
	}
	else
	{
		cout << ans << endl;
	}
	return 0;
}
