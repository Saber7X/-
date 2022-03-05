#include<bits/stdc++.h>
using namespace std;
const int N = 600;
int g[N][N];
int n, m;
int xx[5] = {0, -1, 1, -1, 1}; 
int yy[5] = {-1, 0, 0, 1, -1}; 

bool check(int x, int y)
{
	if (x > 1 && y > 1 && x < n && y < m) //如果不越界 
	{
		for (int i = 0; i < 5; i ++ )//枚举四周方向
		{
			int dx = x + xx[i];
			int dy = y + yy[i];
			if (g[dx][dy] != 1) return false;
		}
		return true;
	}
	return false;
}

void change(int x, int y)
{
	for (int i = 0; i < 5; i ++ )
	{
		int dx = x + xx[i];
		int dy = y + yy[i];
		g[dx][dy] = 0;
	}
}

int main()
{

	cin >> n >> m;
	for  (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			scanf("%1d", &g[i][j]);
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			if (check(i, j))
			{
				change(i, j);
				ans ++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
