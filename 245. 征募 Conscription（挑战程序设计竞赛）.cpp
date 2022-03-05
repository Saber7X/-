#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 500005;
int n, m, d;
int p[N];
struct name
{
	int a, b, w;
}edges[N];

int find(int x)//并查集找祖宗节点
{
	if(p[x] != x) p[x] = find(p[x]);
	return p[x];
} 

bool cmp(name a, name b)
{
	return a.w < b.w;
}
signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		memset(p, 0, sizeof p);
		cin >> n >> m >> d;
		for(int i = 0; i < d; i ++ )
		{
			int a, b, w;
			cin >> a >> b >> w;
			edges[i] = {a, b + n, -w };
		}
		sort(edges, edges + d, cmp);
		for(int i = 0; i <= n + m; i ++ )
		{
			p[i] = i;
		}
		int res = 0;
		int cnt = 0;
		for(int i = 0; i < d; i ++ )
		{
			int a = edges[i].a, b = edges[i].b, w = edges[i].w;
			a = find(a), b = find(b);
			if(a != b)//不在一个集合内
			{
				p[a] = b;
				res += w;
			 } 
		}
		cout << 10000 * (n + m) + res  << endl;
	}
	
}
