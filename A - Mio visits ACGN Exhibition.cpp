#include<bits/stdc++.h>
using namespace std;
const int N = 550;
int g[N][N];

int n, m, c0, c1;
int ans = 0;
int cnt0 = 0, cnt1 = 0;
int xx[2] = {1, 0};
int yy[2] = {0, 1};
bool st[N][N];


void dfs(int x, int y)
{
	if (g[x][y] == 0) cnt0 ++;
	else cnt1 ++;
	
	if (x == n && y == m)
	{	cout << x <<" and " << y<<":  " << cnt0 << " " << cnt1 << endl;
		if (g[1][1] == 0) cnt0 --;
		else cnt1 --;
		if (cnt1 == c1 && cnt0 == c0) ans ++;
		return;
	}
	
	for (int i = 0; i < 2; i ++ )
	{
		int dx = x + xx[i];
		int dy = y + yy[i];
		if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && !st[dx][dy]) 
		{
			st[dx][dy] = 1;
			dfs(dx, dy);
			st[dx][dy] = 0;
			if (g[dx][dy] == 0) cnt0 --;
			else cnt1 --;
		}
	}
	return;
}

int main()
{
	cin >> n >> m >> c0 >> c1;
	for (int i= 1; i <= n; i ++ )
	{
		for (int j= 1; j <= n; j ++ )
		{
			cin >> g[i][j];
		}
	}
	dfs(1, 1);
	cout << ans << endl;
	return 0;
}
