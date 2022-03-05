#include<bits/stdc++.h> 
using namespace std;
const int N = 11;
int ans[N];
int n;
int a[N], b[N], c[N], d[N], st[N][N];
int xx = 0;
void dfs(int u)
{
	if (u == n)
	{
		xx++;
		return;
	}
	for (int i = 1; i <= n; i ++ )
	{
		int x = u, y = i;
		if (!a[x] && !b[y] && !c[x + y] && !d[x - y + n] && !st[x][y])
		{
			st[x][y] = 1;
			a[x] = b[y] = c[x + y] = d[x - y + n] = st[x][y] = true;
			dfs(u + 1);
			a[x] = b[y] = c[x + y] = d[x - y + n] = st[x][y] = false;
		}
	}
}

int main()
{
	
	for (int i = 1; i <= 10; i ++ )
	{
		memset(a, 0, sizeof a);
		memset(b, 0, sizeof b);
		memset(c, 0, sizeof c);
		memset(d, 0, sizeof d);
		memset(st, 0, sizeof st);
		xx = 0;
		n = i;
		dfs(0);
		ans[i] = xx;
	}
	while (cin >> n)
	{
		if (n == 0) break;
		cout << ans[n] << endl;
	}
	return 0;
}
