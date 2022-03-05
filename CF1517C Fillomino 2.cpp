#include<bits/stdc++.h> 
using namespace std;
int g[505][505];
int xx[2] = {0, 1};
int yy[2] = {-1, 0};
int n; 
void ch(int x, int y, int nn)
{
	for (int j = 1; j <= nn; j ++ )
	{
		for (int k = 0; k < 2; k ++ )
		{
			int dx = x + xx[k], dy = y + yy[k];
			if (g[dx][dy] == 0 && dx > 0 && dx <= n && dy > 0 && dy <= n)
			{
				g[dx][dy] = nn;
				x = dx, y = dy;
				break;
			}
		}
	}
	
}
int main()
{
	memset(g, 0, sizeof g);
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		int x; cin >> x;
		ch(i - 1, i, x);
	}
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= i; j ++ )
		{
			cout << g[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
