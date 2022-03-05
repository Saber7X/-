#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 100;
int g[N][N];
int n;

bool st[N];

int ans = 0;

void dfs (int u, int sum)
{
	if (u > n/2) 
	{
		ans = max(ans, sum);
		return;
	}
//	cout << sum << endl;
	
	for (int i = 1; i <= n; i ++ )
	{
		if (st[i]) continue;
		for (int j = i + 1; j <= n; j ++ )
		{
			if (!st[i] && !st[j])
			{
				st[i] = 1;
				st[j] = 1;
				dfs(u + 1, sum ^ g[i][j]);
				st[i] = 0;
				st[j] = 0;
			}
			
		}
	}
}

signed main()
{
	cin >> n;
	n *= 2;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = i + 1; j <= n; j ++ )
		{
			cin >> g[i][j];
		}
	}
	dfs(1, 0);
	cout << ans << endl;
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = i + 1; j <= n; j ++ )
//		{
//			cout << g[i][j] << " ";
//		}
//		cout << endl;
//	}
	return 0;
}
