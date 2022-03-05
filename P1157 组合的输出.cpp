#include<bits/stdc++.h>
using namespace std;
int n, r;
bool st[50];
int ans[50];

void dfs(int u)
{
	if (u > r)
	{
		for (int i = 1; i <= n; i ++ )
		{
			if (st[i])
			{
				printf("%3d", i);
			}
		}
		cout << endl;
		return;
	}
	for (int i = 1;  i <= n; i ++ )
	{
		if (!st[i] && i > ans[u - 1])
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
	cin >> n >> r;
	dfs(1);
	return 0;
}
