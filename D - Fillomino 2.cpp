#include<bits/stdc++.h> 
using namespace std;
const int N = 510;

int xx[4] = {0, 1, -1, 0};
int yy[4] = {-1, 0, 0, 1};

int a[N];
int g[N][N], n;

void dfs(int x, int y, int flag)
{
	for (int j = 1; j <= flag - 1; j ++ )
	{
		for (int i = 0; i < 4; i ++ )
		{
			int dx = x + xx[i], dy = y + yy[i];
			if (g[dx][dy] == 0x3f3f3f3f) 
			{
				//cout << 1 << endl;
				g[dx][dy] = flag;
				
				x = dx, y = dy;
				break;
			}
		}
	}
	
}



int main()
{
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		for(int j = 1; j <= i; j ++ ) g[i][j] = 0x3f3f3f3f;
	}
	
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%d", &a[i]);
		g[i][i] = a[i];
	}
	
	for (int i = 1; i <= n; i ++ )
	{
		dfs(i, i, a[i]);
	}
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= i; j ++ )
		{
			if(g[i][j] == 0x3f3f3f3f)
			{
				cout << "-1 -1";
				return 0; 
			}
		}
	}
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= i; j ++ ) printf("%d ", g[i][j]);
		printf("\n");
	}
	
	return 0;
}
