#include<bits/stdc++.h> 
using namespace std;
int g[500][500];
int main()
{
	int n;
	cin >> n;
	
	int x = 1, y = (n + 1) / 2;
	g[x][y] = 1;
	for (int i = 2; i <= n * n; i ++ )
	{
//		cout << i << " ";

		if (x == 1 && y != n)
		{
			g[n][y + 1] = i;
			x = n;
			y ++ ;
		}
		else if (x != 1 && y == n)
		{
			g[x - 1][1] = i;
			x -- ;
			y = 1;
		}
		else if (x == 1 && y == n)
		{
			g[x + 1][y] = i;
			x ++ ;
		}
		else if (x != 1 && y != n)
		{
			if (g[x - 1][y - 1] == 0)
			{
				g[x - 1][y - 1] = i;
				x = x - 1;
				y = y - 1;
			}
			else
			{
				g[x + 1][y] = i;
				x = x + 1;
			}
		}
	}
	for (int i = 1; i <= n; i ++ ) 
	{
		for (int j = 1; j <= n; j ++ )
		{
			cout << g[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
