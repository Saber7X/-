#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int g[n + 10][n + 10];
	memset(g, -1, sizeof g);
	int x = 1, y = 1;
	int a = 1, b = n;
	int xx[4] = {0, 1, 0, -1};
	int yy[4] = {1, 0, -1, 0};
	int flag = 0;
	x = 1, y = 1;
	int cnt = 1;
	int dx = 1, dy = 1;
	
		while (cnt <= n * n)
		{
			if (dx >= 1 && dx <= n && dy >= 1 && dy <= n && g[dx][dy] == -1)
			{
				
				g[dx][dy] = cnt;
				cnt ++;
			}
			else
			{
				dx -= xx[flag];
				dy -= yy[flag];
				flag ++;
				if (flag == 4)
				{
					flag = 0;
				}
			}
			dx += xx[flag];
			dy += yy[flag];
		}
	
	for (int i= 1; i <= n; i ++ )
	{
		for (int j = 1; j <= n; j ++ )
		{
			printf("%3d", g[i][j]);
		}
		cout << endl;
	}
	
	return 0;
}
