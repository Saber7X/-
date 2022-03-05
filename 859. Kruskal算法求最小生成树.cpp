#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int n, m;
int p[N];
struct name{
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
int main()
{
	cin >> n >> m;
	for(int i = 0; i < m; i ++ )
	{
		int a, b, w;
		cin >> a >> b >> w;
		edges[i] = {a, b, w};
	}
	sort(edges, edges + m, cmp);
	for(int i = 0; i < m; i ++ )
	{
		p[i] = i;
	}
	int res = 0;
	int cnt = 0;
	for(int i = 0; i < m; i ++ )
	{
		int a = edges[i].a, b = edges[i].b, w = edges[i].w;
		a = find(a), b = find(b);
		if(a != b)//不在一个集合内
		{  
			p[a] = b;
			res += w;
			cnt ++; 
		 } 
	}
	if(cnt < n - 1) puts("impossible");
	else cout << res << endl;
}
