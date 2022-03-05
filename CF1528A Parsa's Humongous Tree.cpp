#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 100015;
vector<int> e[N];
int f[N][2], l[N], r[N];

void dfs(int child, int fa)
{
	for(auto i:e[child])
	{
		if(i == fa) continue;
		dfs(i, child);
		f[child][0] += max(f[i][0] + abs(l[child] - l[i]), f[i][1] + abs(l[child] - r[i]));
		f[child][1] += max(f[i][0] + abs(r[child] - l[i]), f[i][1] + abs(r[child] - r[i]));
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n;
		scanf("%lld", &n);
		memset(f, 0, sizeof f);
		
		for(int i = 1; i <= n; i ++ ) scanf("%lld%lld", &l[i], &r[i]), e[i].clear();
		
		for(int i = 1; i < n; i ++)
		{
			int a, b;
			scanf("%lld%lld", &a, &b);
			e[a].push_back(b);
			e[b].push_back(a);
		}
		
		dfs(1, 1);
		
		printf("%lld\n", max(f[1][0], f[1][1]));
	}
	return 0;
}
