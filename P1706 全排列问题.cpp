#include<bits/stdc++.h>
using namespace std;
int n;
bool st[10];
int ans[10];

void dfs(int u)
{
	if (u > n)
	{
		for (int i = 1; i <= n; i ++ )
		{
			printf("%5d", ans[i]);
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i ++ )
	{
		if (!st[i])
		{
			st[i] = true;
			ans[u] = i;
			dfs(u + 1);
			st[i] = false;
		
		}
	}
}

int main()
{
	cin >> n;
	dfs(1);
	return 0;
}
