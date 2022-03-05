#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int n, m, k;
int dist[N], backup[N];

struct name{
	int a, b, w;
}num[N];

int bellman_ford()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	
	for(int i = 1; i <= k; i ++ )//K条边的限制
	{
		memcpy(backup, dist, sizeof dist );
		for(int j = 1; j <= m; j ++ )
		{
			int a = num[j].a, b = num[j].b, w = num[j].w;
			dist[b] = min(dist[b], backup[a] + w);
		} 
	} 
	if(dist[n] > 0x3f3f3f3f / 2) return -1;
	return dist[n];
}


int main()
{
	cin >> n >> m >> k;
	for(int i = 0; i < m; i ++ )
	{
		int a, b, w;
		cin >> a >> b >> w;
		num[i] = {a, b, w};
	}
	int ans = bellman_ford();
	if(res == -1) cout << "impossible";
	else cout << ans;
	
	return 0;
}
